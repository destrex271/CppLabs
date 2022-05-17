#include <iostream>
using namespace std;

template <typename T, typename B> T add(T a, B b){
    return a+b;
}

int main(void){
    cout << add(4.6, 4.6) << endl;
    cout << add(2, 8.1) << endl;
}