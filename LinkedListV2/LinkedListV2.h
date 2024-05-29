#ifndef LINKEDLISTV2_H_INCLUDED
#define LINKEDLISTV2_H_INCLUDED
#include "NodeV2.h"
#include <string.h>
#include<fstream>
template<class T>
class List {
private:
  Node<T> *head;
  Node<T> *tail;

public:
  List() { tail = head = nullptr; }

  void AddHead(T data) {
    Node<T> *newNode = new Node<T>;
    newNode->data = data;
    if (head == nullptr) {
      tail = head = newNode;
    }

    else {
      newNode->pNext = head;
      head = newNode;
    }
  }

  void AddTail(T data) {
    Node<T> *newNode = new Node<T>;
    newNode->data = data;
    if (head == nullptr) {
      tail = head = newNode;
    } else {
      tail->pNext = newNode;
      tail = newNode;
    }
  }

  void AddPos(int pos, T data) {
    Node<T> *newNode = new Node<T>;
    newNode->data = data;

    if(head == nullptr){
        head = tail = newNode;
    }
    int c = 1;
    Node<T> *pNode = head;
    //Node *temp;
    while (c < pos-1) {
      pNode = pNode->pNext;
      c++;
      //if (c == pos - 1)
        //temp = pNode;
    }
    newNode->pNext = pNode->pNext;
    pNode->pNext = newNode;
  }

  void DeleteHead(){
    if(!IsEmty())
        head = head->pNext;
    else
        return;
  }

  void DeleteTail(){
    if(!IsEmty()){
        Node<T>* pNode = head;
        int c = 1;
        while(c < Counter() - 1 ){
            pNode = pNode->pNext;
            c++;
        }
        pNode->pNext = nullptr;
        tail = pNode;
    }
    else{
        return;
    }

  }

  void DetelePos(int pos){
    Node<T>* pNode = head;
    Node<T>* temp;
    int c = 1;
    while(c < pos){
       pNode = pNode->pNext;
       c++;
       if(c == pos-1){
            temp = pNode;
       }
    }
    temp->pNext = pNode->pNext;
  }


void Show(string str = " ") const {
    Node<T> *temp = head;
    while (temp != nullptr) {
      cout << temp->data << str;
      temp = temp->pNext;
    }
    cout << endl;
  } //đã chỉnh lại thuật toán ban đầu là temp->pNext != null

    Node<T>* GetPos(int pos){
    Node<T>* pNode = head;
    int c = 1;
    while(c < pos){
        pNode = pNode->pNext;
        c++;
    }
    return pNode;
  }

  friend ofstream& operator << (ofstream &out, const List<T> &ls ){
    int c = 1;
    while(c <= Counter()){
        out << ls.GetPos(c)->data << endl;
        c++;
    }
    return out;
  }

  int Counter() const {
    if(IsEmty())
        return 0;
    else{
        int coun = 1;
        Node<T> *pNode = head;
        while (pNode->pNext != nullptr) {
          pNode = pNode->pNext;
          coun++;
        }
        return coun;
    }
  }

  bool IsEmty() const { return head == nullptr; }

};
#endif // LINKEDLISTV2_H_INCLUDED
