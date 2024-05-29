#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

template <class T>
struct Node{
    T data;
    Node* pNext;

    Node(){
        pNext = nullptr;
    }
};

#endif // NODE_H_INCLUDED
