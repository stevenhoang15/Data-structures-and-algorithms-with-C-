#ifndef Node_h
#define Node_h
template <class T>
struct Node{
  T data;
  Node<T>* pNext;

  /*Node(){
    pNext = nullptr;
  }

  Node(T da_ta){
    data = da_ta;
  }*/
};
#endif //Node_h
