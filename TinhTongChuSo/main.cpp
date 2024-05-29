#include <iostream>
#include<cmath>
using namespace std;

int TongChuSo(int);
bool KiemTraDoiXung(int);
int TimSoDao(int);
int DemSoChuSo(int);
bool KiemTraSoTuMan(int);

int main()
{
    int soNhap;
    cout << "Nhap so cua ban:"; cin >> soNhap;
    //cout << "Tong cac chu so la:" << TongChuSo(soNhap) << endl;
    /*if(KiemTraDoiXung(soNhap) == 1)
        cout << "So vua nhap la so doi xung" << endl;
    else
        cout << "So vua nhap khong la so doi xung" << endl;*/
    //cout << "So vua nhap co:" << DemSoChuSo(soNhap) << " chu so" << endl;
    if (KiemTraSoTuMan(soNhap))
        cout << "So vua nhap la so tu man" << endl;
    else
        cout << "So vua nhap khong la so tu man" << endl;
    /*cout << "Cac so tu man trong khoang 10 - 100.000 la : " << endl;
    for(int i = 10; i <= 100000; i++){
        if(KiemTraSoTuMan(i))
            cout << i << " ";
    }*/
    return 0;
}

int TongChuSo(int so){
    int sum = 0, chuSo;
    while(so != 0){
       chuSo = so % 10;
       sum += chuSo;
       so = so / 10;
    }
    return sum;
}

bool KiemTraDoiXung(int so){
    return (so == TimSoDao(so));
}

int TimSoDao(int so){
    int soDao = 0, chuSo;
    while(so != 0){
        chuSo = so % 10;
        soDao = soDao * 10 + chuSo;
        so /= 10;
    }
    return soDao;
}

int DemSoChuSo(int so){
    int cnt = 0;
    while(so != 0){
        so /= 10;
        cnt ++;
    }
    return cnt;
}

bool KiemTraSoTuMan(int so){
    int nInput = so;
    int soChuSo = DemSoChuSo(so);
    int sum(0), chuSo;
    while(so != 0){
        chuSo = so % 10;
        sum += pow(chuSo, soChuSo);
        so /= 10;
    }
    return (nInput == sum);
}
