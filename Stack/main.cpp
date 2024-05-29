#include<iostream>
using namespace std;
#include"Stack.h"
int main()
{
    Stack<int> myStack;
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
    myStack.push(6);
    myStack.push(7);

    myStack.deleted();
    myStack.deleted();
    cout << myStack.getItem() << endl;
    cout << myStack.GetSize() << endl;
    return 0;
}
