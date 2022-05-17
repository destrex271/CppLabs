#include <iostream>

using namespace std;

class PrimeT{
    private:
        int a;
    public:
        PrimeT(int a = 10){
            this->a = a;
        }
        void operator ++(){
            this->a++;
        }
        // PrimeT operator ++(){
        //     this->a++;
        //     return this;
        // }
};