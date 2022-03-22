#include <iostream>

using namespace std;

inline int cube(int a){
    return a * a * a;
}

int main(){
    cout << cube(12) << endl;
    return 0;
}