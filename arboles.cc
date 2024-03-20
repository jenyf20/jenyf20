#include <iostream>

using namespace std;

// Definición de la estructura del nodo del árbol
struct Node {
    int key;        // Clave del nodo
    Node* left;     // Puntero al hijo izquierdo
    Node* right;    // Puntero al hijo derecho

    // Constructor que inicializa el nodo con una clave dada
    Node(int k) : key(k), left(nullptr), right(nullptr) {} //nullptr es un puntero nulo
};

// Función para insertar un nuevo nodo en el árbol
Node* insert(Node* root, int key) {
    // Si el árbol está vacío, creamos un nuevo nodo con la clave dada y lo devolvemos como raíz (root)
    if (root == nullptr) {
        return new Node(key);
    } else {
        // Si la clave es menor que la clave del nodo actual, lo insertamos en el subárbol izquierdo
        if (key < root->key) {
            root->left = insert(root->left, key);
        } else {
            // Si la clave es mayor o igual que la clave del nodo actual, lo insertamos en el subárbol derecho
            root->right = insert(root->right, key);
        }
    }
    return root;
}

// Función para realizar un recorrido en orden (inorder traversal) del árbol
void inorderTraversal(Node* root) {
    if (root) {
        // Recorremos el subárbol izquierdo
        inorderTraversal(root->left);
        // Imprimimos la clave del nodo actual
        cout << root->key << " ";
        // Recorremos el subárbol derecho
        inorderTraversal(root->right);
    }
}

// Función principal
int main() {
    Node* root = nullptr;   // Inicializamos el árbol como vacío
    int keys[] = {50, 30, 20, 40, 70, 60, 80}; // Claves a insertar en el árbol
    int n = sizeof(keys) / sizeof(keys[0]);   // Tamaño del arreglo keys

    // Insertamos las claves en el árbol
    for (int i = 0; i < n; i++) {
        root = insert(root, keys[i]);
    }

    // Imprimimos el resultado del recorrido en orden (inorder traversal)
    cout << "Recorrido en orden (inorder traversal): ";
    inorderTraversal(root);

    return 0;
}
