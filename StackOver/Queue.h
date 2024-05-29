#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
using namespace std;
#include<string.h>
#include"Node.h"

template <class T>
class Queue{
    private:
        Node<T>* first;
        Node<T>* last;
    public:
        Queue(){
            first = last = nullptr;
        }

        bool IsEmty(){
            return (first == nullptr);
        }

        void EnQueue(T da_ta){
            Node<T>* newNode = new Node<T>;
            newNode->data = da_ta;
            newNode->pNext = nullptr;
            if(first == nullptr){
                first = last = newNode;
            }
            else{
                last->pNext = newNode;
                last = newNode;
            }
        }

        T DeQueue(){
            T t = first->data;
            Node<T>* pNode = first;
            first = first->pNext;
            delete pNode;
            return t;
        }

        T GetFirst(){
            return first->data;
        }

        int Size(){
            Node<T>* pNode = first;
            int cnt = 1;
            while(pNode != nullptr){
                pNode = pNode->pNext;
                cnt ++;
            }
            return cnt;
        }



};

#endif // QUEUE_H
