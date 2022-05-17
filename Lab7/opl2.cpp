#include <iostream>

using namespace std;

class Obj{
    public:
        int a;
        bool operator <=(Obj &a){
            return this->a <= a.a;
        }
        bool operator >=(Obj &a){
            return this->a >= a.a;
        }
        bool operator ==(Obj &a){
            return this->a == a.a;
        }
        bool operator <(Obj &a){
            return this->a < a.a;
        }
        bool operator >(Obj &a){
            return this->a > a.a;
        }
        
};
