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

    /*int num = 505;
    int quinta = 0;
    int septima = 0;
    int resto = 0;

    quinta = (num / 5);
    resto = (num % 5);
    septima = (quinta / 7);

    cout << "La quinta parte de " << num << " es: " << quinta << endl;
    cout << "La septima parte de la quinta parte de " << quinta << " es: " << septima << endl;
    cout << "El resto de la division de num por 5 es: " << resto << endl;*/

    // 4. Dados dos valores numéricos diferentes entre si, informar cual es el mayor.

    /*int num1 = 18;
    int num2 = 15;

    if(num1>num2)
        cout<<"el mayor es: "<<num1<<endl;
    else
        cout<<"el mayor es: "<<num2<<endl;*/

    /*5. Dados dos valores numéricos, informar cual es el mayor y cual es el menor o si ambos valores son iguales emitir un mensaje.*/

    // int num3 = 18;
    // int num4 = 15;

    // if(num3>num4)
    //     cout<<"el mayor es: "<<num3<<endl;
    // else
    //     if(num3<num4)
    //         cout<<"el mayor es: "<<num4<<endl;
    // else
    //     cout<<"Los numeros son iguales"<<endl;

    // 6. Dadas dos fechas, informar cual es la más reciente. Determinar cuales deben ser los datos de entrada y en que formato los debe ingresar el usuario.

    // int date1 = 19780516;
    // int date2 = 19940523;

    // if(date1>date2)
    //     cout<<"La fecha mayor es : "<<date1<<endl;
    // else
    //     if(date1<date2)
    //         cout<<"La fecha mayor es: "<<date2<<endl;
    // else
    //     cout<<"Las fechas son iguales"<<endl;

    // 7. Dado un triángulo representado por sus lados lado1, lado2 y lado3, determinar e indicar según corresponda: “equilátero”, “isósceles” o “escálenos”.

    // int lado1 = 28;
    // int lado2 = 23;
    // int lado3 = 22;

    // if(lado1==lado2 && lado3==lado1)
    //      cout<<"El triangulo es Equilatero"<<endl;
    // else
    //     if(lado1==lado2 && lado3 != lado1)
    //         cout<<"El triangulo es Isosceles"<<endl;
    // else
    //      cout<<"El triangulo es Escaleno"<<endl;

    // 8. Dados un mes y el año al que corresponde, informar cuantos días tiene el mes.

    // int mes = 2;
    // int anio = 2020;

    // switch (mes)
    // {

    // case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    //     printf("El Mes ingresado tiene 31 dias");
    //     break;
    // case 4: case 6: case 9: case 11:
    //     printf("El Mes ingresado tiene 30 dias");
    //     break;
    // case 2: 
    //         if(anio%4==0) 
    //             cout<<"Este anio es bisiesto y Febrero tiene 29 dias"<<endl;
    //         else
    //             cout<<"Febrero tiene 28 dias"<<endl;
    //     break;
    // default:
    //     printf("Ingreso un mes incorrecto");
    //     break;
    // }

    // 9. Se ingresa una edad, mostrar por pantalla alguna de las siguientes leyendas:
    //  “menor” si la edad es menor o igual a 12
    //  “cadete” si la edad está comprendida entre 13 y 18,
    //  “juvenil” si la edad es mayor que 18 y no supera los 26, y
    //  “mayor” si no cumple ninguna de las condiciones anteriores.

         // int edad = 27;

         // if (edad <= 12)
        //     cout << "La edad ingresada corresponde a un Menor" << endl;
        //  if (edad >= 13 && edad <= 18)
        //     cout << "La edad ingresada corresponde a un cadete" << endl;
        //  if (edad >= 19 && edad <= 26)
        //     cout << "La edad ingresada corresponde a un Juvenil" << endl;
        //  if (edad > 26)
        //     cout << "La edad ingresada corresponde a un Mayor" << endl;

    // 10. Dados dos valores numéricos enteros, calcular e informar su producto mediante sumas sucesivas. 

        int multiplicando = 8; // 2 x 5 = 10 
        int multiplicador = 8;
        int producto = 0;

        for(int i = 0; i < multiplicando; i++){

             producto = producto + multiplicador;
        }           

        cout<<"El producto es: "<<producto<<endl;



    return 0;
}
