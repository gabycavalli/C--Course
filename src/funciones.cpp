// se vuelve a declarar la funcion de la cabecera pero se incluye la logica.

#include "../include/funciones.h"
#include <iostream>
using namespace std;


float calcularPorcentajeDiferencia(){
        long a=0;
        long b =0;
        long porcentaje = 0;

        cout<<"Ingrese A: "<<endl;
        cin>>a;

        cout<<"Ingrese B: "<<endl;
        cin>>b;

        porcentaje = (b-a)*100 / (a+b);

        cout<<"el porcentaje diferencia es: "<<porcentaje<<endl;

}
