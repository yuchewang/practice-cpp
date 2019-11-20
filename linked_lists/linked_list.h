#include<cstdlib>
#include<iostream>


#ifndef LINKED_LIST_H
#define LINKED_LIST_H

template<typename T> class LinkedList;

template<typename T>
class LinkedNode{
    template<class U> friend class LinkedList;
    public:
        LinkedNode():link(nullptr),data(0){}
        LinkedNode(T a):link(nullptr),data(a){}
        
    private:
        LinkedNode<T> *link;
        T data; 
};

template<typename T>
class LinkedList{
    public:
        LinkedList():first(nullptr){}
        ~LinkedList();
        void PushFront(T value);
        void PushBack(T value);
        const T PopFront();
        const T PopBack();
        void InsertNode(int index, T value);
        void Reverse();
        bool isEmpty();
        const int Size();

    private:
        LinkedNode<T>* first;    
};
#endif
