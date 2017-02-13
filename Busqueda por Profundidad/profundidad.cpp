//Viajero busqueda por produndidad...........
#include <iostream>
#include "variables.h"
#include "funciones.h"


  int main(){
     cout<<"-----------------BUSQUEDA POR PROFUNDIDAD-----------------"<<endl;
     principal();
     cin.get();
     return 0;
  }

  void principal(){
     int origen,destino;
     origen=sacarRuta(::origen);
     destino=sacarRuta(::destino);
     cout<<"Ruta origen: "<<ruta_nombre[origen]<<endl<<"Ruta destino: "<<ruta_nombre[destino]<<endl<<"----------------------------------------------------------\nRutas disponibles:\n";
     encontrarProfundo(origen,destino);
     for(int x=0;x<=contadorPila-1;x++){
        cout<<x+1<<".- "<<ruta_nombre[pila[x]]<<" a "<<ruta_nombre[pila[x+1]]<<endl;
     }
   }
