#include<iostream>

using namespace std;

class Test{
    private: 
        int prdata;
    public:
        void setPrData(int pr){
            prdata = pr;
        }
        int getPrData(){
            return this->prdata;
        }
};

int main(){
    Test t;
    int x;
    cin >> x;
    t.setPrData(x);
    cout << t.getPrData() << endl;
    return 0;
}