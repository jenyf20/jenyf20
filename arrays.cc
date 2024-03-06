#include <iostream> 

using namespace std;
//arreglos son una coleccion de elementos del mismo tipo
// cuando yo defino un arreglo le estoy pasando un tamaño, no solo necesito un lugar en la memoria sino que necesito 5co lugares en la memoria para almacenar elementos de tipo double o int, etc, esa es la diferencia con los punteros

int suma(int* a, int s /*(tamaño)*/){
    
    int sum = 0;
    for(int i = 0; i < s; i++){
        sum = sum + a[i];
    }
    return sum;
}

int main(){
   int a[10]; 

   for(int i =0; i< 10; i++){
    a[i] = i*i; // posicion 0, pone 0x0, en la 1 1x1 hasta 9x9 81
   }

   int x = suma(a,10);
   cout<< x << endl;
    /*int a, b, c;
    a=10;
    b=20;
    c=30;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;*/

    /*int* pc = &c;
    int* p = pc;
    int* p = pc + 1;  // tomarle una direccion y sumarle uno va a la otra direccion de memoria, significa correrme en la memoria 4 bytes

    cout<<*pc<< endl;
    cout<<*p<<endl;*/

    //a[i] = a[0] + i(veces el tamaño de un double)*sizeof(double)
    /*double a[5]; //arreglo de cinco elementos, es decir tenemos cinco cuadros, va de 8 en 8 porque es un arreglo de dobles, de enteros iria de 4 en 4 y de caracter de uno en uno
    cout<<a<< endl; //contiene la direccion del primer elemento
    a[0] = 3.1415; // estoy escribiendo el valor en la posicion 0
    for(int i = 0; i < 5; i++){

        cout<< a[i] << endl; // puede mostrar basura en la memoria, pone esas posiciones en diferentes lugares de la memoria cada que corramos el programa

    }*/
    
    return 0;
}