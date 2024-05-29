#include <iostream>
using namespace std;
#include"LinkedListV2.h"
#include"SinhVien.h"
#include<fstream>
int main()
{
    List<int> ls;
    //ls.AddHead(6);
    //ls.AddHead(8);
    ls.AddTail(10);
    ls.AddTail(12);
    ls.AddPos(4,18);
    ls.AddPos(3, 14);
    ls.AddPos(2, 16);//8 16 6 14 10 18 12
    ls.DeleteHead();
    ls.DeleteTail();
    ls.DetelePos(4);//16 6 14 18

    cout << ls.Counter() << endl;
    ls.Show();

    /*SinhVien sv1('A41219', "Vu Thu Phuong", "Da Nang", 19, "Marketting");
    SinhVien sv2('A41218', "Vu Thu Nhung", "Da Nang", 19, "CNTT");
    SinhVien sv3('A42219', "Nguyen Thu Phuong", "Vung Tau", 20, "Sales");
    List<SinhVien> lst;
    lst.AddHead(sv1);
    lst.AddTail(sv2);
    lst.AddPos(2,sv3);

    cout << lst.Counter() << endl;
    cout << lst;*/

    return 0;
}

