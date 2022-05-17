#include <iostream>
using namespace std;

int main(){
    // Array out of bound exception detection
    try{
        int arr[10];
        for(int i = 0; i < 10; i++){
            arr[i] = 0;
        }
        int l = 15;
        if(l > 10){
            throw(l);
        }
    }catch(int l){
        cout << l << " is out of bounds" << endl;
    }
}