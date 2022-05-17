#include <iostream>
using namespace std;

int main(){
    // Array out of bound exception detection
    try{
        int age;
        cin >> age;
        if(age < 18) throw(18);
        else if(age > 120){
            throw(1.2);
        }
        else{   
            cout << "You can vote!";
        }
    }catch(int l){
        cout << "You are currently underaged and can vote in the next " << (18-l) << " years!" << endl;
    }catch(float s){
        cout << "You don't exist!" << endl;
    }
}