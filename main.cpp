#include "include/funciones.h"
#include <iostream>
#include <cstring>
using namespace std;

void imprimirNro(int numero)
{

    switch (numero)
    {

    case 1:
        printf("UNO \n");
        break;
    case 2:
        printf("DOS \n");
        break;
    case 3:
        printf("TRES \n");
        break;
    case 4:
        printf("CUATRO \n");
        break;
    case 5:
        printf("CINCO \n");
        break;
    case 6:
        printf("SIES \n");
        break;
    case 7:
        printf("SIETE \n");
        break;
    case 8:
        printf("OCHO \n");
        break;
    case 9:
        printf("NUEVE \n");
        break;
    default:
        printf("INGRESASTE UN NUMERO MAYOR A NUEVE \n");
        break;
    }
}

void mostrarMatorMenorEdad()
{

    string nombre;
    string nombrejoven;
    string nombreviejo;
    int fechanac = 0;
    int fechajoven = 0;
    int fechaviejo = 0;

    while (nombre != "fin")
    {

        if (fechanac > fechaviejo)
        {
            fechaviejo = fechanac;
            nombreviejo = nombre;
        }
        if (fechanac < fechaviejo)
        {
            fechajoven = fechanac;
            nombrejoven = nombre;
        }

        cout << "Por favor ingrese su Nombre: " << endl;
        cin >> nombre;

        cout << "Por favor ingrese su edad: " << endl;
        cin >> fechanac;
    }

    cout << "La persona mas vieja es: " << nombreviejo << endl;
    cout << "Su edad es: " << fechaviejo << endl;

    cout << "La persona mas joven es: " << nombrejoven << endl;
    cout << "Su edad es: " << fechajoven << endl;
}

void esBoolean()
{
    int a = 0;
    int b = 0;
    bool multiplo;

    cout << "Ingrese el nro A: " << endl;
    cin >> a;
    cout << "Ingrese el nro B: " << endl;
    cin >> b;

    if (a % b == 0)
    {
        multiplo = "true";
        cout << "VERDADERO!! A es multiplo de B" << endl;
    }
    else
    {
        multiplo = "false";
        cout << "FALSO!! A no es multiplo de B" << endl;
    }
}

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

    // int multiplicando = 8; // 2 x 5 = 10
    // int multiplicador = 8;
    // int producto = 0;

    // for(int i = 0; i < multiplicando; i++){

    //      producto = producto + multiplicador;
    // }

    // cout<<"El producto es: "<<producto<<endl;

    // Complementario A:
    // imprimirNro(5);

    // Complementario B:

    // imprimir del a - b

    /*int a = 1;
    int b = 20;

    for (int i = a; i <= b; i++)
    {

        if (i > 9)
        {
            if (i % 2 == 0)
            {
                cout << "PAR" << endl;
            }
            else
                cout << "IMPAR" << endl;
        }
        else
            imprimirNro(i);*/

    /*11. Se ingresa un conjunto de valores reales, cada uno de los cuales representan el sueldo de un empleado, excepto el último valor que será 0 para indicar el fin del ingreso de datos.
    Se pide desarrollar un programa que determine e informe:  Cuántos empleados ganan menos $2000.  Cuántos ganan $2000 o más pero menos de $3000.
    Cuántos ganan $3000 o más pero menos de $5000.  Cuántos ganan $5000 o más. */

    /*float less2 = 0;
    float less3 = 0;
    float less5 = 0;
    float more5 = 0;
    float salary = 1;

    cout<<"Ingrese el salario: "<<endl;
    cin>>salary;

    while(salary!=0){

         if(salary<2000){
             less2=less2+1;
         }
         if(salary>=2000 && salary<3000){
             less3 = less3+1;
         }
         if(salary>=3000 && salary<5000){
             less5 = less5+1;
         }
         if(salary>=5000){
             more5 = more5+1;
         }

         cin>>salary;
    }

         cout<<"Los que ganan menos de $2000 son: "<<less2<<endl;
         cout<<"Los que ganan mas de $2000 y menos de $3000 son: "<<less3<<endl;
         cout<<"Los que ganan entre $3000 y $5000 son: "<<less5<<endl;
         cout<<"Los que ganan 5000 o mas de $5000 son: "<<more5<<endl; */
    /*ejercicio 12
     Dado un valor num�rico entero m, determinar e imprimir un listado con los m primeros m�ltiplos de 3 que no sean m�ltiples de 5.*/

    // int m = 0;
    // int i = 0;

    /*
    cout<<"Ingrese cantidad de multiplos: "<<endl;
    cin >> m;
    for (int i = 1; i <= m; i++) {
    int multiplo = 3 * i;
    if (multiplo % 5 != 0) {
        cout << multiplo << endl;
        }
    }
    */

    /*cout<<"Ingrese cantidad de multiplos: "<<endl;
    cin >> m;
    while(i < m){

    int multiplo = 3 * i;
    if (multiplo % 5 != 0) {
     cout << multiplo << endl;
        }else{
        m++;
        }
        i++;
    }*/

    /*ejercicio 13
    Dados 10 valores numéricos, informar cual es el mayor. */

    /*int num = 0;
    int mayor = 0;
    int arr[10] = {10,100,200,600,15,21,23,0,0,3};
    // Ingreso los 10 numeros

    for(int i=0;i<10;i++){
         if(arr[i] > mayor){
           mayor = arr[i];
        }

    }

    cout<<"El numero mayor de tu ingreso fue: "<<mayor<<endl;*/

    /*ejercicio 14
    Dados n valores numéricos, informar el mayor, el menor y en que posición del conjunto fueron ingresados cada uno de ellos. */

    /*int num = 0;
    int mayor = 0;
    int menor =0;
    int posmax = 0;
    int posmin = 0;


    cout<<"Por favor ingrese 10 numeros: "<<endl;
    cin>>num;
    mayor = menor = num;

    for(int i=0;i<9;i++){

        if(num > mayor){
           mayor = num;
           posmax = i;
           }

        if(num < menor){
            menor = num;
            posmin = i;
            }

        cin>>num;

    }

    cout<<"El numero mayor de tu ingreso fue: "<<mayor<<" en la posicion: "<<posmax<<endl;
    cout<<"El numero menor de tu ingreso fue: "<<menor<<" en la posicion: "<<posmin<<endl;*/

    // Dado un conjunto de nombres y fechas de nacimiento con formato ddmmaaaa, que finaliza cuando se ingrese un nombre igual a “fin”, informar el nombre de la persona con mayor edad y el de la más joven. */

    // mostrarMatorMenorEdad();

    // Desarrollar la función esMultiplo que recibe dos valores a y b y retorna true o false según a sea o no múltiplo de b. El prototipo será: bool esMultiplo(int a, int b);

    // esBoolean();

    // Desarrolle la función calcularPorcentajeDiferencia que recibe dos valores a, b y retorna el siguiente cálculo: (b-a) *100 / (a+b). El prototipo será: float calcularPorcentajeDiferencia(long a, long b);

    // calcularPorcentajeDiferencia();

    // Write a program in C to find the maximum and minimum element in an array

    // busqueda_max_min();

    // Write a program in C to print all unique elements in an array.

    // unique_elements();

    // Write a program in C to count the frequency of each element of an array.

    // frecuency();

    // Write a program in C to separate odd and even integers in separate arrays.

    // par_impar();

    // Write a program in C to sort elements of array in ascending order

    // ascending_sort();

    // Write a program in C to print the individual characters from a string.(console display)

    // Write a program in C to print individual characters of string in reverse order

    // descending_sort();

    // Write a program in C to count the total number of words in a string

    // count_words();

    // Write a program in C to find the length of a string without using library function.

    // length_of_array();

    /*33. Desarrolle una estructura que guarde los datos de los n alumnos de la materia programación en Lenguaje C,
    y los muestres por pantalla, la estructura debe tener (dni, nombre, apellido, edad, profesión, lugar de nacimiento, dirección y teléfono)*/

     // listado_alumnos();

    /*34. Desarrolle un arreglo de estructura para un programa que lea una lista de alumnos y las notas correspondientes a una determinada asignatura;
    el resultado será el tanto por ciento(porcentaje) de los alumnos aprobados y reprobados*/

    // lista_alumnos_aprobados();

    /*----PUNTEROS--------*/
    // Imprimir el valor y su dirección de memoria de una variable.

    /*int p = 50;
    cout << "La direccion de memoria de p es: " << &p << endl;
    cout << "El valor de p es: " << p << endl;
    cout << endl;*/

    // Asignar memoria de un tipo de dato primitivo y liberar la memoria al finalizar la operación realizada (no olvidarse de las buenas praticas)

    /*int *a = (int *)malloc(sizeof(int));
    if (a == NULL)
    {
        cout << "El puntero esta vacio";
        return -1;
    };

    cout << "La direccion de memoria de a es: " << a << endl;
    free(a);*/

    // Declarar una estructura, asignarle memoria, modificar los valores a través de una función y liberar memoria.

        //print_persona_info();

    // Ingresar por teclado 2 números e imprimir el valor y su dirección de memoria

        // memory_address_numbers();

   // 35 . Inicializar 10 empleados (un empleado tiene, sueldo, impuesto a las ganancias, cuit, dni, bono (dinero que la empresa da para ajustar la inflación), asistencia, nombre y apellido)
    /*Nota: El impuesto es del 35% en el país
    se pide:
    Imprimir el ranking del top 5 de empleados, (los empleados que tiene mayor sueldo)
    imprimir el empleado del mes (el que más asistencia tiene)
    imprimir el empleado más pobre (el que menos gana).
    imprimir el empleado irresponsable (el empleado que más falta tiene)
    imprimir el empleado estrella, el empleado que no tiene faltas y tiene mayor sueldo
    La cantidad total que la empresa paga a los empleados
    La cantidad total de bono que la empresa paga a los empleados
    El empleado favorito, el favorito es que tiene mayor cantidad de bono
    El empleado descuidado, empleado que no tiene bono
    EL empleado que mayor impuesto paga.
    El impuesto total que recauda el gobierno.

    Nota: se puede hacer el resultado en ambos lenguajes c++ y en javascript, lo ideal sería avanzar hasta donde puedas en c++*/

    typedef struct{
        string nombre;
        string apellido;
        int dni;
        int asistencia;
        int sueldo;
        int retenciones;
        int bono;

    }Empleado;

    Empleado emp[10];
    Empleado ranking[5];
    string emp_mes;
    string menor_sueldo;
    string emp_mas_faltas;
    string emp_menos_faltas;
    int acum=0;
    int acum2=0;

    for(int i=0; i<3; i++){
        cout<<"INGRESE NOMBRE EMPLEADO "<<i<<":"<<endl;
        cin>>emp[i].nombre;
        cout<<"INGRESE APELLIDO EMPLEADO "<<i<<":"<<endl;
        cin>>emp[i].apellido;
        cout<<"INGRESE ASISTENCIA EMPLEADO "<<i<<":"<<endl;
        cin>>emp[i].asistencia;
        cout<<"INGRESE SUELDO EMPLEADO "<<i<<":"<<endl;
        cin>>emp[i].sueldo;
        cout<<"INGRESE RETENCION EMPLEADO "<<i<<":"<<endl;
        cin>>emp[i].retenciones;
        cout<<"INGRESE BONO EMPLEADO "<<i<<":"<<endl;
        cin>>emp[i].bono;
    }

    //Imprimir el ranking del top 5 de empleados, (los empleados que tiene mayor sueldo)
   /for(int j=0; j<3; j++){

        if(emp[j].sueldo > ranking[j].sueldo){
            ranking[j+1].sueldo = emp[j].sueldo;
            }
        cout<<"Ranking :"<<ranking[j].sueldo<<endl;
    }

     //imprimir el empleado del mes (el que más asistencia tiene)

     for(int h=0; h<3; h++){
        if(emp[h].asistencia>acum){
            emp_mes = emp[h].nombre;
        }
     }
     cout<<"El empleado del mes es: "<<emp_mes<<endl;

     //imprimir el empleado más pobre (el que menos gana).

     for(int k=0; k<3; k++){
        acum = emp[k].sueldo;
        if(emp[k].sueldo<acum){
            menor_sueldo = emp[k].nombre;
        }
     }
     cout<<"El empleado con menor sueldo es: "<<menor_sueldo<<" y el sueldo es: "<<acum<<endl;

     //imprimir el empleado irresponsable (el empleado que más falta tiene)

        for(int h=0; h<3; h++){
            acum = emp[h].asistencia;
                if(emp[h].asistencia>acum){
                    emp_mas_faltas = emp[h].nombre;
            }
        }
     cout<<"El empleado con mas faltas es: "<<emp_mas_faltas<<endl;

     // imprimir el empleado estrella, el empleado que no tiene faltas y tiene mayor sueldo

        for(int a=0; a<3; a++){
            acum = emp[a].asistencia;
            acum2 = emp[a].sueldo;
                if(emp[a].asistencia<acum && emp[a].sueldo>acum2){
                    emp_menos_faltas = emp[a].nombre;
                }
            }
     cout<<"El empleado estrella es: "<<emp_menos_faltas<<endl;

     //La cantidad total que la empresa paga a los empleados

     for(int b=0;b<3;b++){
        total_sueldos = total_sueldos + emp[b].sueldos;
     }






    return 0;
}
