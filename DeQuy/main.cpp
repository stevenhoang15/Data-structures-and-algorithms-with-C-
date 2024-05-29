#include <iostream>
using namespace std;

void ThapHaNoi(int N, char a, char b, char c){
    if(N == 1){
        cout << a << "-->" << c << endl;
    }
    else{
        ThapHaNoi(N-1, a, c, b);
        ThapHaNoi(1, a, b, c);
        ThapHaNoi(N-1, b, a, c);
    }
}

int TinhGiaiThua(int n){
    if(n == 0)
        return 1;
    return n*TinhGiaiThua(n-1);
}

int main()
{
    ThapHaNoi(3, '1', '2', '3');
    cout << TinhGiaiThua(4);
    return 0;
}
