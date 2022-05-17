#include <iostream>
using namespace std;

template <typename A, typename B> void show(A a, B b){
    cout << a << " " << b << endl;
}

int main(){
show(100,"hello hello");
show('k',1500);
show(1.23,2987);
}
