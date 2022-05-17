#include <iostream>

using namespace std;

class Virt{
    public:
        virtual void dummy() const = 0;
        virtual void prin(){};
};

class Eg: Virt{
    public:
    void test2(){
        cout << "In test2" << endl;
    }
    void prin() override{
        cout << "OK" << endl;
    }
};


int main(){
    Eg e;
    e.prin();
    return 0;
}