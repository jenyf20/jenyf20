#include <iostream>

using namespace std;
//la estructura solo es orientada a los datos
//clases son formas de definir nuevos tipos de datos
//toda clase tiene dos partes, la primera son los atributos y la segunda operaciones o metodos
//se pueden hacer varios constructores y c sabe a cual llamar dependiendo de los parametros
class Point {
//atributos: son aquellos campos que necesita ese punto para poder ser representados
private: // pte explicacion
double x;
double y;


//operaciones o metodos
public:
    Point(){ //constructor: inicializa los atributos en la memoria, se llama igual que la clase y no retorna nada

        x = 0.0;
        y = 0.0;}
    Point (double a) { x= a; y = a;}
    Point (double a, double b) { x = a; y = b;}
    void print() { cout<< "(" << x << " "<< y<< ")" << endl;}
        // Calcular el angulo que tiene la recta formada por (0,0) (x,y)
        double angle(){}
        // Calcular la distancia entre este punto y el punto q
        double distance (Point* q) {}
    };

 //crear la clase vecto (L,A)
 // operaciones:
 // Suma
 // Prod punto
 //Mult por escalar

 
int main(){

    Point p;
    p.print(); //llamando la operacion print sobre el objeto p
    Point q(10.0);
    q.print();
    Point r(3.4, 5.6);
    r.print();
    return 0;
}