#include <iostream>
using namespace std;

template <typename A> void sort(A a[], int len){
    for(int i = 0; i < len-1; i++){
        for(int j = i+1; j < len; j++){
            if(a[i] > a[j]){
                A t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(int i = 0; i < len; i++){cout << a[i] << endl;}
    cout << "------------------------------------------------" << endl;
}

int main(){
    int a[5] = {3,6,1,7,8};
    double b[5] = {1.2, -0.9, 8.0, 7.6, 5.9};
    sort(a, 5);
    sort(b, 5);
}