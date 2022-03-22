#include<iostream>
using namespace std;

class Test2{
    int i;
    public:
        int getI(){return this->i;}
        void setI(int i){this->i=i;}
};

Test2 retObj(Test2 ret){
    return ret;
}

int main(){
     Test2 x;
     x.setI(10);
     Test2 b = retObj(x);
     cout << b.getI() << endl;
}