#include <iostream>

using namespace std;

int main(){
    int a = 42;
    int b = 32;
    int& r = a;
    cout<<r<< endl;
    r=99;
    cout<<a << endl;
    
  //usar solo los punteros cuando se deba cambiar
  //devolve referencia lo que digo es retornar una referencia ese tipo de dato

    return 0;
}
