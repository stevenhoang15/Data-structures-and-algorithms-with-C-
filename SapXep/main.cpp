#include <iostream>
using namespace std;
#include<ctime>
#include<fstream>

void SinhNgauNhien(int N, const char * fileName){
    ofstream fout(fileName);
    fout << N << endl;
    srand(time(0));
    for(int i = 0; i<N; i++){
        int s = rand() % N*3;
        fout << s << " ";
    }
    fout.close();
}

int main()
{
    int a[1000], n;

    SinhNgauNhien(n, "E:\TaiLieuHoc\Hoc C++\dl.txt");
    cout << "Hello" << endl;
    cout << "fILE" << endl;
    //DocFile(n, a, "C:\Users\Admin\OneDrive - Thang Long University\Tài liệu\dl.txt");
    //SapXep(n, a);
    //Print(n, a);
    return 0;
}
