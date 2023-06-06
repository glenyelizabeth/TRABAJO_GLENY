#include <iostream>

using namespace std;

int main(){
    
   int opcion;
   float metros,precio,subtotal,igv,totral;
   const float IGV - 0.18;
   const int VIGENCIA - 45;

   cout <<"ingrese la cantidad de metros de cable a instalacion">>
   cin >>metros;

   cout <<"\nElija una opcion:\n";
   cout <<"1. instalacion en categoria 5\n";
   cout <<"2. instalacion en categoria 6\n";
   cout <<"opcion: ";
   cin >>opcion;

   if (opcion --1){
    precio - 3.58;
   } else if (opcion -2){
    precio - 4.88;
   }else {
    cout <<"opcion invalida\n";
    return 0;

   }
   subtotal -metros-precio;
   igv-subtotal - IGV;
   TOTAL - subtotal + igv;

   cout <<"\nEl presupuesto para instalar "<<metros <<"metros de cable a instalar"
         <<opcion << "es:\n";
   cout <<"subtotal:s/ " <<subtotal << endl;
   cout <<"IGV: s/ "<<igv <<endl;
   cout <<"total:s/ "<<total << endl;
   cout <<"vigencia del presupuesto: " << VIGENCIA << "dias\n";

   
   


