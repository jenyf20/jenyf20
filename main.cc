#include <iostream>
#include "listc.hh" 

using namespace std;

int main() {
    cout << "Inicio de la prueba de la lista" << endl;

    List<int> l; // Crea una lista de enteros
    cout << "Lista inicial: ";
    l.print(); // Debería estar vacía al principio

    // Añade elementos a la lista
    l.push_back(10); // Añade un 10 al final
    cout << "Después de push_back(10): ";
    l.print(); // Debería mostrar 10

    l.push_front(-12); // Añade un -12 al inicio
    cout << "Después de push_front(-12): ";
    l.print(); // Debería mostrar -12 seguido de 10

    // Prueba el método at
    cout << "Acceso al elemento en el índice 0 (esperado -12): " << l.at(0) << endl;
    cout << "Acceso al elemento en el índice 1 (esperado 10): " << l.at(1) << endl;

    // Modifica un elemento usando at
    cout << "Modificando el elemento en el índice 0 (de -12 a 15)" << endl;
    l.at(0) = 15; // Modifica el elemento en el índice 0

    cout << "Después de modificar, acceso al elemento en el índice 0 (esperado 15): " << l.at(0) << endl;

    // Muestra el estado final de la lista
    cout << "Estado final de la lista: ";
    l.print();

    return 0;
}