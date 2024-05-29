#ifndef SINHVIEN_H_INCLUDED
#define SINHVIEN_H_INCLUDED
struct SinhVien{
    char MaSinhVien;
    string HoTen;
    string QueQuan;
    int Tuoi;
    string ChuyenNganh;

    SinhVien(char ma_sinh_vien, string ho_ten, string que_quan, int tuoi, string chuyen_nganh){
        MaSinhVien = ma_sinh_vien;
        HoTen = ho_ten;
        QueQuan = que_quan;
        Tuoi = tuoi;
        ChuyenNganh = chuyen_nganh;
    }

};

#endif // SINHVIEN_H_INCLUDED
