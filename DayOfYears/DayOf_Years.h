#ifndef DAYOFYEARS_H_INCLUDED
#define DAYOFYEARS_H_INCLUDED
class DayOfYears{
    private:
        int thuTuNgay;
        static string strTenThang[12];
        static int soNgayCacThang[12];
    public:
        DayOfYears();
        DayOfYears(int);
        int getThuTuNgay()const;
        void showString()const;
};


#endif // DAYOFYEARS_H_INCLUDED
