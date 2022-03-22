#include <iostream>
#include <stdlib.h>
using namespace std;

class Test{
    static int a;
    public:
        static void ok(){
            cout << a;
        }
};

int Test::a = 10;

int main(void){
    Test::ok();
}