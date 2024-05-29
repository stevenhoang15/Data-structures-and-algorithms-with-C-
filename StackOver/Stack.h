#ifndef STACK_H
#define STACK_H
#include"Node.h"

template <class T>
class Stack{
    private:
        Node<T>* top;
    public:
        Stack(){
            top = nullptr;
        }

        bool IsEmpty(){
            return (top == nullptr);
        }

        void Push(T da_ta){
            Node<T>* newNode = new Node<T>;
            newNode->data = da_ta;
            newNode->pNext = top;
            top = newNode;
        }

        T GetTop()const{
            return (top->data);
        }

        T Pop(){
            T t = top->data;
            Node<T>* pNode = top;
            top = top->pNext;
            delete pNode;
            return t;
        }

};

#endif // STACK_H
