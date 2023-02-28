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

int busqueda_max_min(){

    int arr[10]={5,6,65,23,10,89,75,235,2,8};
    int max=0;
    int min=0;
    min=arr[0];
    int i;
    for(i=0;i<10;i++){
            if(arr[i]<min){
                min=arr[i];
            }
            if (arr[i]>max){
                max=arr[i];
            }


    }

    cout<<"El mayor del array es: "<<max<<endl;
    cout<<"El menor del array es: "<<min<<endl;


}

int unique_elements(){

   int arr[5]={2,2,3,5,2};
    int arr2[5];
    arr2[0]=arr[0];

    for(int i=0;i<5;i++){

        if(arr[i]!=arr2[i]){
            arr2[i]==arr[i];
            }

            cout<<"Los elementos unicos son: "<<arr2[i]<<endl;


    }
}


int frecuency(){

        int arreglo[5]={2,2,3,5,2};
        int n=0;
        int contador = 0;

        cout<<"Ingrese numero a revisar: "<<endl;
        cin>>n;

        for (int i=0;i<5;i++){
		if (n==arreglo[i]){
			contador++;
            }

        }


        cout<<"El elemento: "<<n<<" se repite: "<<contador<<" veces"<<endl;



}

int par_impar(){

int num = 0;
    int pares[6];
    int impares[6];

    cout<<"Ingrese 6 numeros: "<<endl;
    cin>>num;

    for(int i=0;i<5;i++){
        if(num % 2==0){
            pares[i]=num;
        }

        if(num %2 !=0){

            impares[i]=num;
        }
        cin>>num;
    }
    cout<<"Los Pares son: "<<endl;
    for(int i=0;i<3;i++){

        cout<<pares[i]<<endl;
          }

    cout<<"Los impares son: "<<endl;
    for(int i=0;i<3;i++){
        cout<<impares[i]<<endl;

    }


}

int ascending_sort(){

int i,j,n,temp,vector[10];

    for (i = 0; i < 10; i++){

        cout<<"Ingresa un numero: ";
        cin>> vector[i];

    }

    for (i = 0; i < n-1; ++i){
            for (j = 0; j < 10; ++j){

            if (vector[j] > vector[j+1]){

                temp = vector[j];

                vector[j] = vector[j+1];

                vector[j+1] = temp;

            }

        }

    }

    for (i = 0; i < 10; ++i){

        cout<< vector[i] <<endl;

    }

}

int descending_sort(){

    int i,j,n,temp,vector[10];

        for (i = 0; i < 10; i++){

        cout<<"Ingresa un numero: ";
        cin>> vector[i];

        }

        for (i = 0; i < n-1; ++i){
            for (j = 0; j < 10; ++j){

            if (vector[j] < vector[j+1]){

                temp = vector[j];

                vector[j] = vector[j+1];

                vector[j+1] = temp;

            }

        }

    }

    for (i = 0; i < 10; ++i){

        cout<< vector[i] <<endl;

    }

}

int count_words(){

    string frase = "hola como estas vos";
        int cant = 0;
        for (int i = 0; i < frase.length() ; ++i) {
            if((frase[i]==' ' && frase[i+1]!=' ')){
                cant=cant+1;
                }
            }
    cout<<"La cantidad de palabras que hay es: "<<cant+1<<endl;


}

void length_of_array(){

string palabra = "hola";
   int cont = 0;
     while(palabra[cont]!= 0){
        cont++;
   }
cout<<"El largo del string es: "<<cont<<endl;
//cout<<"EL LARGO DEL STRING ES: "<<palabra.size()<<endl;
//cout<<"EL LARGO DEL STRING ES: "<<palabra.length()<<endl;

}

typedef struct{
    int dni;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugar_nacimiento;
    string direccion;
    int telefono;
} Alumno;

void listado_alumnos(){

Alumno alumno[3];

    for(int i=0;i<3;i++){

      cout<<" Va a ingresar los datos del Alumno "<<i+1<<endl;
      cout<<endl;
      cout<<"Ingrese nombre del alumno: "<<endl;
      cin>>alumno[i].nombre;
      cout<<"Ingrese apellido: "<<endl;
      cin>>alumno[i].apellido;
      cout<<"Ingrese DNI: "<<endl;
      cin>>alumno[i].dni;
      cout<<"Ingrese EDAD: "<<endl;
      cin>>alumno[i].edad;
      cout<<"Ingrese PROFESION: "<<endl;
      cin>>alumno[i].profesion;
      cout<<"Ingrese Lugar de Nacimiento: "<<endl;
      cin>>alumno[i].lugar_nacimiento;
      cout<<"Ingrese DIRECCION: "<<endl;
      cin>>alumno[i].direccion;
      cout<<"Ingrese TELEFONO: "<<endl;
      cin>>alumno[i].telefono;
      cout<<endl;
    }


    for(int j=0;j<3;j++){
      cout<<"Empleado "<<j+1<<endl;
      cout<<"Nombre: "<<alumno[j].nombre<<endl;
      cout<<"Apellido: "<<alumno[j].apellido<<endl;
      cout<<"DNI: "<<alumno[j].dni<<endl;
      cout<<"EDAD: "<<alumno[j].edad<<endl;
      cout<<"PROFESION: "<<alumno[j].profesion<<endl;
      cout<<"L. NAC: "<<alumno[j].lugar_nacimiento<<endl;
      cout<<"DIRECCION: "<<alumno[j].direccion<<endl;
      cout<<"TELEFONO: "<<alumno[j].telefono<<endl;
      cout<<endl;
    }
}


    





