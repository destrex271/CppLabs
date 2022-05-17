#include <iostream>

using namespace std;

class Arr{
    public:
        int a[10];
        Arr(){
            for(int i = 0; i < 10; i++){
                a[i] = i;
            }
        }
        void operator [](int len){
            if(len > 10){
                cout << "Array index out of bounds" <<  endl;
            }else{
                cout << a[len] << endl;
            }
        }
        void operator ()(int len){
            cout << 10 << endl;
        }
};


int main(){
    Arr b;
    b[9];
    b(10);
}


