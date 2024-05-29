#ifndef NODEV2_H_INCLUDED
#define NODEV2_H_INCLUDED
template<class T>
struct Node {
  T data;
  Node<T> *pNext;

  Node() {
    data = 0;
    pNext = nullptr;
  }

  Node(T da_ta) { data = da_ta; }
};

/*Node *CreateNode(int data) {
  Node *newNode = new Node;
  if (newNode == nullptr) {
    return nullptr;
  }

  newNode->data = data;
  newNode->pNext = nullptr;
}
*/

#endif // NODEV2_H_INCLUDED
