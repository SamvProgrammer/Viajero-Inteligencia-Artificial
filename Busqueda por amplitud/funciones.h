void meterPila(int elemento);
int sacarRuta(string ruta);
void sacarCola();
bool principal(int hijos,int anidamiento,int destino);


bool principal(int hijos,int anidamiento,int destino){
  bool rep=false,repetido=false;
  int contadorHijos=0;
  int contador=1;
  do{
  if(cola[0][anidamiento]==destino){
     anidamientoGlobal=anidamiento;
     return true;
  }else{
      for(int x=0;x<39;x++){
        if(rutas[cola[0][anidamiento]][x]){
           if(contadorCola>30){
              return false;
           }else{
              if(anidamiento>0){
                for(int i=0;i<=contadorPila;i++){
                    if(pilaRecorridos[i]==x){
                       repetido=true;
                       break;
                    }
                 }
              }
              if(repetido){
                repetido=false;
                continue;
              }
              contadorHijos++;
              contadorCola++;
              apuntador=cola[contadorCola];
              for(int i=0;i<=anidamiento;i++){
             *apuntador=cola[0][i];
             apuntador++;
           }
           *apuntador=x;
           meterPila(*apuntador);
           }
        }
      }
      sacarCola();
      if(contadorCola!=-1){
        if(contador<hijos){
       contador++;
     }else{
       rep= principal(contadorHijos,(anidamiento+1),destino);
       return rep;
     }
      }else{
         return false;
      }
   }
  }while(!rep);
  return rep;
}

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
void sacarCola(){
 int *apuntador1,*apuntador2;
  if(contadorCola!=-1){
   for(int x=0;x<contadorCola;x++){
     apuntador1=cola[x];
     apuntador2=cola[x+1];
     for(int y=0;y<200;y++){
       *apuntador1=*apuntador2;
       *apuntador2=-1;
       apuntador1++;
       apuntador2++;
     }
   }
   contadorCola--;
 }
}

void meterPila(int elemento){
  contadorPila++;
  pilaRecorridos[contadorPila]=elemento;
}





