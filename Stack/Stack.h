#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
template <class T>
struct Stack{
    int N;
    T a[1000];

    Stack(){
    N = 0;
}

void push(T element){
    a[N] = element;
    N++;
}

void deleted(){
    if(N){
       a[N-1] = a[N-2];
    }
    N--;
}

int GetSize()const{
    return N;
}

T getItem()const{
    return a[N-1];
}



};





#endif // STACK_H_INCLUDED
