#include <iostream>
#include "variables.h"
#include "funciones.h"
int main(){
  cout<<"---------------------------BUSQUEDA POR APLITUD---------------------------"<<endl;
  int origen,destino;

  origen=sacarRuta(::origen);
  destino=sacarRuta(::destino);
  cout<<"Origen: "<<ruta_nombre[origen]<<endl;
  cout<<"Destino: "<<ruta_nombre[destino]<<endl;
  cout<<"---------------------------"<<endl;
  contadorCola++;
  apuntador=cola[contadorCola];
  *apuntador=origen;
  meterPila(*apuntador);
  cout<<"\nRutas posibles:"<<endl;
   if(principal(0,0,destino)){
        apuntador=cola[0];
        for(int x=0;x<anidamientoGlobal;x++){
        cout<<x+1<<".-"<<ruta_nombre[*apuntador]<<" a "<<ruta_nombre[*(apuntador+1)]<<endl;
        apuntador++;
     }
  }else{
     cout<<"No encontrado";
   }

  cin.get();
  return 0;
}
//------------------------------------------
