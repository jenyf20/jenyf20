#include <iostream>

using namespace std;

class Vector{   
private:
    unsigned int capacity_;
    unsigned int size_;
    int* storage_;

public:
    Vector(){
        cout <<"Hola desde el constructor"<<endl;
        capacity_ =6;
        size_ = 0;
        storage_ = new int[capacity_];
    }
    ~Vector(){
        cout<<"hola desde el destructor"<<endl;
    }

    bool empty() {return size_ =0;}
    
    unsigned int size() { return size_; }
    unsigned int capacity() { return capacity_;}
    void push_back(int elem){}
    //invoco el constructor con delete y la direccion
    //el destructor solo es llamado en los sujetos del stack no es llamado automaticamente para los del hip
    //que se puede hacer
    //fun crea memoria en el heap
    //fun 2 no usa memoria del heap



}

int main(){


    return 0;
}