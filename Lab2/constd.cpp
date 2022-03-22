#include<iostream>

using namespace std;

class Mt{
    public: 
        Mt(){
            cout << "Const";
        }
        ~Mt(){
            cout << "Destructor";
        }
};

int main(){
    Mt m;
    return 0;
}