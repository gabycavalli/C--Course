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

