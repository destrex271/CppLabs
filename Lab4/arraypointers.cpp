#include <iostream>
using namespace std;

int main(void){
    int len = 3;
    int* arr  =new int[len];
    for(int i =0; i < len; i++){
        cin >> arr[i]; // >> is extraction operator, like extracting out from cin
    }
    for(int i =0; i < len; i++){
        cout << arr[i] << endl; // << is insertion operator, like inserting in cout
    }
    delete[] arr;
    cout << endl << "---------------" << endl;
    for(int i =0; i < len; i++){
        cout << arr[i] << endl; // << is insertion operator, like inserting in cout
    }
}