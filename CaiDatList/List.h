#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include<iostream>
using namespace std;
#include<fstream>

template <class T>
class List{
    private:
        int soPhanTu;
        T mang[1000];
    public:
        List(){soPhanTu = 0;}

        void themPhanTu(T tNew){
            mang[soPhanTu++] = tNew;
        }

        void themPhanTuVaoViTriCan(int viTri, T tNew){ //hàm này được dùng khi list đã có phần tử
            soPhanTu++;
            for(int i = soPhanTu-1; i >= viTri; i--){
                mang[i] = mang[i-1];
            }
            mang[viTri-1] = tNew;
        }

        void hienThiToanBo()const{
            for (int i=0; i<soPhanTu; i++){
                cout << mang[i] << " ";
            }
        }

        void xoaPhanTuTrongKhoang(int viTri1, int viTri2){
            if((0 < viTri1 < soPhanTu) && (0 < viTri2 < soPhanTu) && (viTri1 < viTri2)){
                for(int i = viTri1; i<= viTri2; i++){
                    xoaPhanTu(viTri1);
                }
            }
        }

        void xoaPhanTu(int viTri){
            for(int i=viTri-1; i<soPhanTu-1;i++){
                mang[i] = mang[i+1];
            }
            soPhanTu--;
        }

        int demPhanTu()const{
            return soPhanTu;
        }

        bool timKiem(T tFind)const{
            for(int i=0; i<soPhanTu; i++){
                if (mang[i] == tFind)
                    return true;
            }
            return false;
        }

        T getPhanTu(int viTri){
            return mang[viTri-1];
        }

        List<T> taoListKhongTrungLap()const{
            List<T> newList;
            for (int i=0; i<soPhanTu; i++){
                if(!newList.timKiem(mang[i]))
                    newList.themPhanTu(mang[i]);
            }
            return newList;
        }

        friend ostream &operator << (ostream &out, const List<T> &lst){
            for(int i=0; i<lst.soPhanTu; i++){
                out << lst.mang[i] << ",";
            }
            return out;
        }

        friend istream &operator >> (istream &in, List<T> &lst){
            int iMax;
            cout << "Them so Phan tu:";
            in >> iMax;
            for (int i = 0; i<iMax; i++){
                T phanTu;
                cout << "Them phan tu thu " << i+1 << ":";
                in >> phanTu;
                lst.themPhanTu(phanTu);
            }
            return in;
        }

        void xuatPhanTuDauTien()const{
            cout << mang[0];
        }

        void xuat50PhanTuDauTien()const{
            for(int i = 0; i<50; i++){
                cout << mang[i] << ",";
            }
        }

        void xuat50PhanTuCuoi()const{
            for (int i=soPhanTu-1; i>(soPhanTu-51); i--){
                cout << mang[i] << ",";
            }
        }

        void inPhanTuViTriLe()const{
            for(int i = 1; i<soPhanTu; i+=2)
                cout << mang[i] << " ";
        }

        void inPhanTuViTriChan()const{
            for(int i=0; i<soPhanTu; i+=2)
                cout << mang[i] << " ";
        }

        void inPhanTuTrongKhoang(int viTri1, int viTri2)const{
            for (int i=viTri1-1; i<viTri2; i++)
                cout << mang[i] << " ";
        }

        void inPhanTuCuoi()const{
            cout << mang[soPhanTu-1];
        }

        void xuatRaFile(const char*fileName){
            ofstream fout(fileName);
            fout << soPhanTu << endl;
            for(int i=0;i<soPhanTu;i++){
                fout << mang[i] << " ";
            }
            fout.close();
        }

        void nhapTuFile(const char* fileName){
            ifstream fin(fileName);
            fin >> soPhanTu;
            for(int i=0; i< soPhanTu; i++)
                fin>>mang[i];
            fin.close();
        }

        int layViTriPhanTu(T tFind){
            for(int i=0; i<soPhanTu; i++)
                if(mang[i] == tFind)
                    return i+1;
            return 0;
        }

        List<T> giao2List(List<T> ls){
            List<T> newList;
            for(int i=0; i<soPhanTu; i++){
                if(timKiem(mang[i]) && ls.timKiem(mang[i]))
                    newList.themPhanTu(mang[i]);
                }
            return newList;
        }

        List<T> hop2List(List<T> ls){
            List<T> newList;
            for(int i=0; i<soPhanTu; i++)
                newList.themPhanTu(mang[i]);
            for(int i=0; i<ls.demPhanTu();i++)
                newList.themPhanTu(ls.getPhanTu(i+1));
            return newList;
        }

        List<T> tru2List(List<T> ls){
            List<T> newList;
            for(int i=0; i<soPhanTu; i++)
                if(timKiem(mang[i])&& !ls.timKiem(mang[i]))
                    newList.themPhanTu(mang[i]);
            return newList;
        }

        List<T> operator - (List<T> ls){
            List<T> newList;
            newList = tru2List(ls);
            return newList;
        }

};


#endif // LIST_H_INCLUDED
