#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include"Node.h"

class List{
    private:
        Node* head;
        Node* tail;
    public:

        List(){tail = head = nullptr;}

        void Add(int pos, int data){
             Node* newNode = new Node;
             newNode->data = data;
             if(IsEmty()){
                head = tail = newNode;
             }
             else{
                 if(pos < 1){
                    return;
                 }
                 if(pos == 1){
                    newNode->pNext = head;
                    head = newNode;
                 }
                 if(pos > Counter()){
                    tail->pNext = newNode;
                    tail = newNode;
                 }
                 else{
                    int c = 1;
                    Node* temp = head;
                    while(c < pos-1){
                        temp = temp->pNext;
                        c++;
                    }
                    newNode->pNext = temp->pNext;
                    temp->pNext = newNode;
                 }
             }
        }

        void Delete(int pos){
            if(pos < 0){
                return;
            }
            if(IsEmty()){
                return;
            }
            else{
                if(pos == 1){
                   head = head->pNext;
                }
                if(pos == Counter()){
                    int c = 1;
                    Node* temp = head;
                    while(c < Counter()-1){
                        temp = temp->pNext;
                        c++;
                    }
                    temp->pNext = nullptr;
                    tail = temp;
                }
                else{
                    int c = 1;
                    Node* temp = head;
                    Node* pNode;
                    while(c < Counter()){
                        temp = temp->pNext;
                        c++;
                        if(c == pos-1)
                           pNode = temp;
                        if(c == pos)
                           pNode->pNext = temp->pNext;
                        tail = temp;
                    }
                }
            }
        }

        void Show(string str = " ")const{
            Node* temp = head;
            while(temp != nullptr){
                cout << temp->data << str;
                temp = temp->pNext;
            }
        }//đã chỉnh lại thuật toán ban đầu là temp->pNext != null

        int Counter()const{
            int coun = 0;
            Node* pNode = head;
            while(pNode != nullptr){
                coun++;
                pNode = pNode->pNext;
            }
            return coun;
        }

        bool IsEmty()const{
            return head == nullptr;
        }
        /*void AddHead(int data){
            Node* newNode = new Node;
            newNode->data = data;
            if(head == nullptr){
                tail = head = newNode;
            }

            else{
                newNode->pNext = head;
                head = newNode;
            }
        }

        void AddTail(int data){
            Node* newNode = new Node;
            newNode->data = data;
            if(head == nullptr){
                tail = head = newNode;
            }
            else{
                tail->pNext = newNode;
                tail = newNode;
            }
        }

        void AddPos(int pos, int data){
            Node* newNode = new Node;
            newNode->data = data;

            int c = 1;
            Node* pNode = head;
            while(c < pos-1){
                pNode = pNode->pNext;
                c++;
            }
            newNode->pNext = pNode->pNext;
            pNode->pNext = newNode;
        }

        void DeleteHead(){
            if (!IsEmty())
                head = head->pNext;
            else
                return;
        }

        void DeleteTail(){
            int c = 1;
            Node* temp = head;
            while(c < Counter()-1){
                temp = temp->pNext;
                c++;
            }
            temp->pNext = nullptr;
            tail = temp;
        }

        void DeletePos(int pos){
            int c = 1;
            Node* temp = head;
            Node* pNode;
            while(c<Counter()){
                temp = temp->pNext;
                c++;
                if(c==pos-1)
                    pNode = temp;
                if(c==pos)
                    pNode->pNext = temp->pNext;
            }
            tail = temp;
        }*/
            /*else{
                int counter = 1;
                Node* temp = head;
                while(counter < pos){
                    temp = temp->pNext;
                    if(counter = pos-1){
                        temp->pNext = newNode;
                    }
                    counter++;
                }
                newNode->pNext = temp;
                N++;
            }*/

        /*List(){N=0;}

        void Add(int pos, T* addT){
            T* newT = new T;
            newT = addT;
            head = newT;
            N++;
        }

        void Show()const{
            cout << *head << endl;
        }*/

        /*T Get(int pos)const{
            return mang[pos-1];
        }

        int Count()const{
            return N;
        }

        void PrintAll()const{
            for(int i = 0; i<N-1; i++)
                cout << mang[i] << " ";
            cout << mang[N-1] << endl ;
        }

        bool Find(T findT)const{
            bool flas = false;
            for(int i=0; i<N; i++)
                if(mang[i] == findT)
                    flas = true;
            return flas;
        }*/

};


#endif // LIST_H_INCLUDED
