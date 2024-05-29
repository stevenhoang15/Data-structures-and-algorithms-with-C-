#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

#include<iostream>
using namespace std;
#include"Node.h"
template <class T>
class LinkedList{
  private:
    Node<T>* head;
    Node<T>* tail;
  public:
    LinkedList<T>(){
      head = nullptr;
      tail = nullptr;
    }

    //ham kiem tra list rong
    bool IsEmty()const{
      return (head == nullptr);
    }

    //ham dem so phan tu
    int Counter()const{
      if(IsEmty()){
        return 0;
      }
      else{
        int c = 1;
        Node<T>* pNode = head;
        while(pNode->pNext != nullptr){
          c++;
          pNode = pNode->pNext;
        }
        return c;
      }
    }

    //ham Add
    void Add(int pos, T da_ta){
        Node<T>* newNode = new Node<T>;
        newNode->data = da_ta;
        newNode->pNext = nullptr;
        if(pos == 1){
            if(IsEmty()){
                head = tail = newNode;
            }
            else{
                newNode->pNext = head;
                head = newNode;
            }
        }

        if(pos > Counter()){
            if(IsEmty()){
                head = tail = newNode;
            }
            else{
                tail->pNext = newNode;
                tail = newNode;
            }
        }
        else{
            if(IsEmty()){
                head = tail = newNode;
            }
            else{
                Node<T>* pNode = head;
                Node<T>* temp;
                int c = 1;
                while(c<pos){
                    pNode = pNode->pNext;
                    c++;
                    if(c == pos-1)
                        temp = pNode;
                }
                newNode->pNext = pNode->pNext;
                temp->pNext = newNode;
            }
        }
      }

    void Delete(int pos){
      if(pos < 1 || IsEmty()){
        return;
      }
      else{
        if(pos == 1){
          head = head->pNext;
        }
        if(pos == Counter()){
          int c = 1;
          Node<T>* pNode = head;
          while(c < pos-1){
            pNode = pNode->pNext;
            c++;
          }
          pNode->pNext = nullptr;
          tail = pNode;
        }
        else{
          int c =1;
          Node<T>* pNode = head;
          Node<T>* myNode;
          while(c < pos){
            pNode = pNode->pNext;
            c++;
            if(c == pos-1)
              myNode = pNode;
          }
          myNode->pNext = pNode->pNext;
        }
      }
    }

    void ShowList(string str = " ")const{
      int c = 1;
      Node<T>* pNode = head;
      while(c < Counter()){
        pNode = pNode->pNext;
        cout << pNode->data << str;
      }
    }

    T getData(int pos)const{
      int c = 1;
      Node<T>* pNode = head;
      while(c < pos){
        pNode = pNode->pNext;
        c++;
      }
      return pNode->data;
    }
};


#endif // LINKEDLIST_H_INCLUDED
