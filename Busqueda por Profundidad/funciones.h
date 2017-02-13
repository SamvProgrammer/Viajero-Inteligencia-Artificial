 int contadorCiclo=0;
 int sacarRuta(string ruta);
 void principal();
 int encontrarProfundo(int origen,int destino);
 void sacarPila();
 void meterPila(int elemento);
 int checarPila();



 int sacarRuta(string ruta){
   int ruta_final;
     string *apuntador=ruta_nombre;
     for(int x=0;x<sizeof(ruta_nombre)/sizeof(string);x++){
        if(*apuntador == ruta){
             ruta_final=x;
             break;
         }
         apuntador++;
     }
     return ruta_final;
   }

int encontrarProfundo(int origen,int destino){
      meterPila(origen);
      bool rep=false;
      for(int x=0;x<39;x++){
        if(rutas[origen][x]){
            if(contadorPila>3){
                break;
            }else if(x==destino){
                meterPila(destino);
                return 1;
            }else{

               if(rep){
                rep=false;
                continue;
               }

               if(encontrarProfundo(x,destino)){
                  return 1;
               }else{
                 sacarPila();
               }
            }
        }
     }

 return 0;
}



  void meterPila(int elemento){
      contadorPila++;
      pila[contadorPila]=elemento;
   }

  void sacarPila(){
     if(contadorPila!=-1){
       contadorPila--;
     }
   }

s