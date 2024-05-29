#include <iostream>
using namespace std;

#include"Stack.h"
#include"Queue.h"
int main()
{
    Stack<int> st;
    st.Push(5);
    st.Push(9);
    st.Push(13);
    if(st.IsEmpty())
        cout << "Stack rong" << endl;
    else
        cout << "Stack co phan tu" << endl;

    cout << st.Pop() << endl;
    cout << st.GetTop() << endl;

    Queue<string> que;
    if(que.IsEmty())
        cout << "Que rong" << endl;
    else
        cout << "Que co phan tu" << endl;
    que.EnQueue("Hoang Tuan Kiet");
    que.EnQueue("Tuan Kha");
    cout << que.DeQueue() << endl;
    cout << que.DeQueue() << endl;
    cout << que.Size() << endl;
    return 0;
}
