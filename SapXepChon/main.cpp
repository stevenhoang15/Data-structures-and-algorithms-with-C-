#include <iostream>
using namespace std;

void PrintAll(int N, int a[]){
    for(int i = 0; i<N; i++)
        cout << a[i] << " ";
}

void SelectionSort(int N, int a[]){
    for(int i = 0; i<N-1; i++){
        int minIndex = i;
        for(int j = 0; j=i+1; j++){
            if(a[j] < a[minIndex])
                minIndex = j;
        }
        if(minIndex != i){
            int temp = a[minIndex];
            a[minIndex] = a[i];
            a[i] = temp;
        }
        cout << "Vong lap thu nhat cua i :" << endl;
        PrintAll(N, a);
    }

}
int main()
{
    int a[7] = {7, 8, 3, 0, 6, 2, 1};
    SelectionSort(7, a);

    return 0;
}
