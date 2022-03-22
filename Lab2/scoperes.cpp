#include<iostream>

using namespace std;

class Aout{
    private:
        int a;
    public:
        void setA(int a);
        int getA();
};

void Aout::setA(int a){
    this->a = a;
}

int Aout::getA(){
    return this->a;
}

int main(){
    Aout a;
    int c;
    cout << "Enter value of c" << endl;
    cin >> c;
    a.setA(c);
    int x = a.getA();
    cout << x;
    return 0;
}