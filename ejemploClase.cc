#include <iostream>

using namespace std;

class Point{
    private:
    double x;
    double y;
    public:
    Point(){  
    Point(double c) {
        void move (double dx, double dy){
            
        }
    }
    void print(){
      cout<< "(" << x << " "<< y<< ")" << endl;}
    
};

int main(){
    Point p; /* p es un objeto de la clase Point,
    construido utilizando el constructor que no recibe ningun argumento*/
    Point q(3.0);
    return 0;
}