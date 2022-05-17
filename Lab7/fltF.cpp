#include <iostream>

using namespace std;

class Float{
    private:
        float b;
    public:
        Float(float a){
            b = a;
        }
        operator float(){
            return b;
        }
};
