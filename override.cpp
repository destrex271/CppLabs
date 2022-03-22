#include <iostream>

using namespace std;

class Bank{
    
    double P,R,T,A;
    public:
        void setVals(double P, double T,double R = 12.0){
            this->P = P;
            this->R = R;
            this->T = T;
            cout << R << endl;
        }
        double getSi(){
            return (P*R*T)/100;
        }
};

int main(){
    double P,R,T;
    cout << "Values" << endl;
    cin >> P >> T;
    Bank sbi;
    try{
        cin >> R;
        sbi.setVals(P,T,R);
    }catch( std::exception e){
        cout << endl;
        sbi.setVals(P,T);
    }
    cout << "Simple intrest is " << sbi.getSi() << endl;
}