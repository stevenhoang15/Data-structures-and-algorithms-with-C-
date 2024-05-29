#include <iostream>
using namespace std;

#include"LinkedList.h"
int main()
{
    LinkedList<int> lst;
    lst.Add(2,2);
    /*lst.Add(1,4);
    lst.Add(3,2);
    cout << lst.Counter() << endl;
    lst.ShowList();
    //lst.Add(3, 6);*/

    if(lst.IsEmty()) cout << "lst rong" << endl;
    else cout << "Lst co phan tu" << endl;
    cout << lst.Counter() << endl;
    lst.ShowList();
    cout << "Hello" << endl;
    return 0;
}
