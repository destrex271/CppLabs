#include <iostream>

using namespace std;

class Car{
    public:
        int a;
        Car(int a = 0){
            this->a = a;
        }
};

class Float{
    private:
        int b;
    public:
        Float(float a){
            b = a;
        }
        Float operator =(Car &c){
            return Float(c.a);
        } 
};
