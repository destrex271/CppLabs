#include <iostream>

using namespace std;


class Test{
    private:
        int x;
    public:
        friend void operator - (Test &x);
        void show(){
            cout << this -> x << endl;
        }
};

void operator -(Test &x){
    x.x = -x.x;
}


int main(){
    Test x1;
    -x1;
}
