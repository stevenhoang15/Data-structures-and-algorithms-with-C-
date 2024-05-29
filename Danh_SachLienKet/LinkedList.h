#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include"DanhSachLienKet.h"

class LinkedList{
    private:
        int sz;
        Node* head;
        //Node* tail;
    public:
        LinkedList(){
            sz = 0;
            head = nullptr;
            //tail = nullptr;
        }

        void addElement(int pos, int data){
            Node* newNode = new Node(data);

            if(head == nullptr){//them phan tu khi list rong
                head = newNode;
                sz ++;
            }

            if(pos == 1){
                newNode->next = head;
                head = newNode;
                sz++;
            }

            if(pos = sz+1){

            }

        }

};




#endif // LINKEDLIST_H
