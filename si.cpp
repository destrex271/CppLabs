#include <iostream>

using namespace std;

double sI(double P, double T, double R = 12){
    return (P*R*T)/100;
}


int main(){
    double P,R,T;
    cout << "Enter principle and time" << endl;
    cin >> P;
    cin >> T;
    cout << "R?" << endl;
    char c;
    cin >> c;
    if(c == 'y' || c == 'Y'){
        cin >> R;
        cout << "Si is : " << sI(P,T,R) << endl;
    }else{
        cout << "Si is : " << sI(P,T) << endl;
    }
    
    return 0;
}