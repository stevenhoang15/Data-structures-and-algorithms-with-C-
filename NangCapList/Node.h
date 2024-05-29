#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

struct Node{
    int data;
    Node* pNext;

    Node(){
        data = 0;
        pNext = nullptr;
    }

    Node(int da_ta){
        data = da_ta;
    }

};

Node* CreateNode(int data){
    Node* newNode = new Node;
    if(newNode == nullptr){
        return nullptr;
    }

    newNode->data = data;
    newNode->pNext = nullptr;
}
#endif // NODE_H_INCLUDED
