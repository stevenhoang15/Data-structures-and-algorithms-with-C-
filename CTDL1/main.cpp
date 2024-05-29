#include <iostream>
using namespace std;
void Hien_Thi_So(int[], int);
void Them_So(int[], int, int);
bool Tim_So(int[], int, int);

void Hien_Thi_So(int iMang[], int n) {
  for (int i = 0; i < n; i++) {
    cout << iMang[i] << ",";
  }
  cout << endl;
}

void Them_So(int iMang[], int n, int iSo_Them) {
  iMang[n] = iSo_Them;
  n++;
  cout << "Mang da duoc them mot so " << iSo_Them << endl;
}

bool Tim_So(int iMang[], int n, int iSo_Tim) {
  bool Flas = false;
  for (int i = 0; i < n; i++)
    if (iMang[i] == iSo_Tim)
      Flas = true;
  return Flas;
}

int main() {
  int iSo_Phan_Tu;
  int iMang[iSo_Phan_Tu];
  cout << "Nhap so phan tu cua mang:";
  cin >> iSo_Phan_Tu;
  for (int i = 0; i < iSo_Phan_Tu; i++) {
    cout << "Nhap phan tu thu " << i + 1 << " cua mang:";
    cin >> iMang[i];
  }
  int chon;

  do {
    cout << "Chuong trinh quan ly so" << endl
         << "1.Hien Thi so" << endl
         << "2.Them so" << endl
         << "3.Tim so" << endl
         << "4.Thoat" << endl;
    cout << "Nhap chuc nang ban muon chon:";
    cin >> chon;

    if (chon == 1) {
      cout << "Mang so la:" << endl;
      Hien_Thi_So(iMang, iSo_Phan_Tu);
    }

    if (chon == 2) {
      int iSo_Them;
      cout << "Nhap so ban muon them:";
      cin >> iSo_Them;
      Them_So(iMang, iSo_Phan_Tu, iSo_Them);
    }

    if (chon == 3) {
      int iSo_Tim;
      cout << "Nhap so can tim:";
      cin >> iSo_Tim;
      bool bCo = Tim_So(iMang, iSo_Phan_Tu, iSo_Tim);
      if (bCo == true)
        cout << "Co so " << iSo_Tim << endl;
      else
        cout << "Khong co so can tim " << endl;
    }
    if (chon == 4)
      break;
  } while (chon != 4);

  return 0;
}
