#include"day_of_yeas.h"

string day_of_years::tenThang[12] = { " thang Mot ", " thang Hai ", " thang Ba ", " thang Bon ", " thang Nam ", " thang Sau ",
                                       " thang Bay ", " thang Tam ", " thang Chin ", " thang Muoi ", " thang Muoi Mot ", " thang Muoi Hai " };
int day_of_years::soNgayTrongThang[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

day_of_years::day_of_years(){};

day_of_years::day_of_years(int thuTuNgay):thuTuNgay(thuTuNgay){};

int day_of_years::getThuTuNgay()const{
    return thuTuNgay;
}

void day_of_years::showString()const{
    /*int sumDay = 31;
    for (int i = 0; i < 12; i++){
        sumDay += soNgayTrongThang[i+1];
        if((sumDay - soNgayTrongThang[i+1]) < thuTuNgay < sumDay){
            cout << "Ngay thu " << thuTuNgay << " cua nam la ngay:" << soNgayTrongThang[i+1]-(sumDay - thuTuNgay) << tenThang[i+1] << endl;
            break;
        }
    }*/
    if (thuTuNgay <= 31){
        cout << "Ngay thu " << thuTuNgay << " cua nam la ngay:" << thuTuNgay << tenThang[0] << endl;
    }

    else{
        int sumDay=31;
        for (int i = 0; i<12; i++){
            sumDay+=soNgayTrongThang[i+1];
            if(thuTuNgay > (sumDay-soNgayTrongThang[i+1])){
                cout << "Ngay thu " << thuTuNgay << " cua nam la ngay:" << sumDay-thuTuNgay << tenThang[i+1] << endl;
                break;
            }
        }
    }





}
