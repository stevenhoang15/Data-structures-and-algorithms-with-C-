#ifndef DAY_OF_YEAS_H_INCLUDED
#define DAY_OF_YEAS_H_INCLUDED
#include<iostream>
using namespace std;

class day_of_years{
    private:
        int thuTuNgay;
        string static tenThang[12];
        int static soNgayTrongThang[12];
    public:
        day_of_years();
        day_of_years(int);
        int getThuTuNgay()const;
        void showString()const;

};


#endif // DAY_OF_YEAS_H_INCLUDED
