#include"linked_list.h"

template<typename T>
LinkedList<T>::~LinkedList(){
    LinkedNode<T>* current = first;
    LinkedNode<T>* next = nullptr;

    while(current){
        next = current->link;
        delete current;
        current = next;
    }
}

template<typename T>
void LinkedList<T>::PushFront(T value){
    LinkedNode<T>* new_node = new LinkedNode<T>(value);
    new_node->link = first;
    first = new_node;
}

template<typename T>
void LinkedList<T>::PushBack(T value){
    LinkedNode<T>* new_node = new LinkedNode<T>(value);
    LinkedNode<T>* current = first;
    while(current->link){
        current = current->link;
    }
    current->link = new_node;
}

template<typename T>
const T LinkedList<T>::PopFront(){
    if(first == nullptr) std::cerr<<"List is Empty"<<std::endl;
    LinkedNode<T>* current = first;
    T value = first->data;
    first = first->link;
    delete current;
    return value;
}

template<typename T>
const T LinkedList<T>::PopBack(){
    if(first == nullptr) std::cerr<<"List is Empty"<<std::endl;
    LinkedNode<T>* current = first;
    LinkedNode<T>* prev = nullptr;
    while(current->link){
        prev = current;
        current = current->link;
    }
    T value = current->data;
    delete current;
    prev->link = nullptr;
    return value;
}

template<typename T>
void LinkedList<T>::InsertNode(int index, T value){
    LinkedNode<T>* current = first;
    LinkedNode<T>* new_node = new LinkedNode<T>(value);
    LinkedNode<T>* prev = nullptr;
    for(int i = 0; i < index; i++){
        prev = current;
        current = current->link;
        if(current == nullptr ) std::cerr<<"Index is invalid"<<std::endl;

    }
    if(prev == nullptr) {
        first = new_node;
        new_node->link = current;
    }
    else {
        new_node->link = current;
        prev->link = new_node;
    }

}

template<typename T>
void LinkedList<T>::Reverse(){
    LinkedNode<T>* current = first;
    LinkedNode<T>* prev = nullptr;
    while(current){
        LinkedNode<T>* r = prev;
        prev = current;
        current = current->link;
        prev->link = r;
    }
    first = prev;
}

template<typename T>
bool LinkedList<T>::isEmpty(){
    return first==nullptr ;
}

template<typename T>
const int LinkedList<T>::Size(){
    int list_size = 0;
    LinkedNode<T>* current = first;
    while(current){
        current = current ->link;
        list_size++;
    }
    return list_size;
}
