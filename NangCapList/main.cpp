#include <iostream>
using namespace std;
#include"List.h"

int main()
{
    List ls;

    /*ls.AddHead(3);
    ls.AddHead(5);
    ls.AddTail(7);
    ls.AddTail(9);
    ls.AddHead(11);
    ls.AddHead(13); // 17 13 11 5 3 7 9 15 19
    ls.AddPos(2,15);
    ls.AddPos(3,17);
    ls.AddPos(5,19);
    ls.AddPos(7,18);
    //ls.DeleteHead();
    //ls.DeleteTail();
    //13 15 17 11 19 5 18 3 7 9
    ls.DeletePos(6);*/
    /*srand(time(NULL));
    for(int i=0; i<10; i++){
        int n = rand() % 100;
        ls.AddHead(n);
        ls.AddTail(n);
    }*/
    if(ls.IsEmty()) cout << "Ls rong" << endl;
    else cout << "Ls is not emty" << endl;
    cout << ls.Counter() << endl;
    ls.Show();

    /*int a = 6;
    int *p = &a;

    int b=7;
    int *v = &b;

    ls.Add(1,p);
    ls.Add(2,v);
    ls.Show();*/

    /*ls.Add(7);
    ls.Add(9);
    ls.Add(13);
    ls.Add(15);*/

    //ls.PrintAll();
    return 0;
}
