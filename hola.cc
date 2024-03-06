// clang++ hola.cc -o hola
// ./hola
// no declarar variables globales
// no importa si el * se pone al lado de la variable o del tipo de variable, o usar int* a, *b, *c tambien se puede
//las estructuras son como creo nuevos tipos de datos
#include <iostream>

using namespace std;

int main () {
    cout << "hola"<<endl;
    int i = 4252;
    cout<<"valor de i: " << i << endl;
    cout<<"direccion de i"<< &i <<endl;
    int* pi = &i;
    cout << "valor de pi: " << pi<< endl;
    cout << "direccion de pi: " << &pi << endl;
    int** ppi = &pi; //puntero de puntero
    cout << "valor de ppi: " <<ppi << endl;
    cout << "direccion de ppi :" <<&ppi<< endl;
    //cualquier variable ocupa un lugar en la memoria
    // ahora quiero un comando para ir a la direccion y poder manipular
    // * toma la variable y me lleva a la direccion
   cout<< *pi<< endl; //lleveme a la direccion almacenada en pi
   
   cout << *pi << endl;
   *pi = 342; //aqui me modifico el valor
   cout<< i<< endl;

   
    return 0;
}