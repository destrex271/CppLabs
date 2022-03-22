#include <iostream>

using namespace std;


// Overloading a function in add namespace to allow it to add two numbers of varying data types


namespace add{

    inline int sum(int a, int b){
        return a+b;
    }

    inline double sum(double a, double b){
        return a+b;
    }


    inline double sum(int a, double b){
        return a+b;
    }


    inline double sum(double a, int b){
        return a+b;
    }

}


int main(){
    cout << add::sum(10,10) << endl << add::sum(10.12,12.12) << endl << add::sum(10,10.23) << endl << add::sum(10.23, 12) << endl;
    return 0;
}