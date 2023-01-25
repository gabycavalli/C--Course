#include "include/funciones.h"
#include <iostream>
using namespace std;

int main()
{

    /* Ejercicio1:

    int num1=20;
    int num2=63;

    cout << "La suma de num1 y num2 es:" <<num1+num2<<endl;
    cout << "La resta de num1 y num2 es:" <<num1-num2<<endl;
    cout << "La multiplicacion de num1 y num2 es:" <<num1*num2<<endl;*/

    /* Ejercicio 2: Dada una terna de números naturales que representan el día, el mes y el año de una determinada
    fecha informarla como un solo número natural de 8 dígitos (aaaammdd).*/

    // int dia=12;
    // int mes=10;
    // int anio=2023;
    // int fecha = (anio*10000)+(mes*100)+dia;

    // //ingresar dia
    // cout<<"La fecha es:"<<fecha<<endl;

    /*Ejercicio 2:
    Dado valor numérico entero que se ingresa por teclado, se pide informar:
        1)La quinta parte de dicho valor
        2)El resto de la división por 5
    3)La séptima parte de la quinta parte.
    */

    int num = 505;
    int quinta = 0;
    int septima = 0;
    int resto = 0;

    // ingresar por teclado el numero.

    // cout<<"Ingrese numero:"<<endl;
    // cin>>num;

    // hallar la 5ta parte de num

    quinta = (num / 5);

    // hallar el resto

    resto = (num % 5);

    // hallar la septima de la quinta

    septima = (quinta / 7);

    cout << "La quinta parte de " << num << " es: " << quinta << endl;
    cout << "La septima parte de la quinta parte de " << quinta << " es: " << septima << endl;
    cout << "El resto de la division de num por 5 es: " << resto << endl;

    // 4. Dados dos valores numéricos diferentes entre si, informar cual es el mayor.
    // 5. Dados dos valores numéricos, informar cual es el mayor y cual es el menor o,
    //    si ambos valores son iguales emitir un mensaje.
    // 6. Dadas dos fechas, informar cual es la más reciente. Determinar cuales deben ser los datos de entrada y en que formato los debe ingresar el usuario

    return 0;
}
