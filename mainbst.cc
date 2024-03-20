#include "bst.hh"
#include <iostream>

using namespace std;



int main(){
    cout<< "BST"<< endl;
    BST<int> s;
    s.insert(elem:23);
    cout<< s.size() <<endl;
    return 0;
}