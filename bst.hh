#ifndef _BST_HH_
#define _BST_HH_

template <typename T> class BST{
private:
    class Node{
    private:
        T data_; //Value stored by the node
        Node *left_; //left child
        Node *right_; //Right child
    public:
    Node() : data_(), left_(nullptr), right_(nullptr){} //el constructor es caso base, haga algo si no hay nada
    Node(const T& d) :data_(d), left_(nullptr), right_(nullptr) {} // aca estoy diciendo que el d no va a cambiar
    const T& getData() const {return data_;} //getData es un metodo una operacion
 bool hasLeft() const {return left_ != nullptr;}
 bool hasRight() const {return right_ != nullptr;}
 Node* getLeft() {return left_};
 Node* getRight() {return right_};
 void setLeft(Node* n) { left_ = n; }
 void setRight(Node* n) { right_ = n;}
    };
    Node *root_;
    unsigned int size_;

public:
    /**
     * Constructs an empty BST
     * complexity_ 0(1)
    */
    BST(): root_(nullptr), size_(0) {}
    bool empty() const { return root_ = nullptr; } //esta ooperacion no va a modificar atributos del objeto
    unsigned int size() const{ return size_}
    void insert(const T& elem){
        if (empty()){
            root_ = new Node(elem);
            size_++;
        } else{
            insert(elem, root_);
        }
    }
    void insert(const T& elem, Node* n) //llama el usuario desde la estructura de datos desde el main la de inser y verifica si e
      if (elem < n->getData()){
            // elem va a la izquierda de n
            if (n->hasLeft()){
                insert(elem, n->getLeft();)
            }else {
                Node* x = new Node(elem);
                n->setLeft(x);
                size_++;
            }
      } else if (n->getData() < elem){ 
        //elem va a la derecha
            if(n->hasRight()){
                insert(elem, n->getRight();)
            }else {
                Node* x = new Node(elem);
                n->setLeft(x);
                size_ ++;
            }
      }     
      else {
        return;
      }
};

#endif