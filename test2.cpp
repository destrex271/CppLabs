#include <iostream>
using namespace std;

class Array{
    private:
        int* ptr;
        int len;
        bool isPrime(int a){
            for(int i = 2; i < a; i++){
                if(a%i == 0){
                    return false;
                }
            }
            return false;
        }
    public:
        Array(int* ptr, int len){
            int pos = 0;
            this->ptr = ptr;
            this->len = len;
            int i = 2;
            while(pos <= 100){
                if(isPrime(i)){
                    ptr[pos] = i;
                    pos++;
                }
                i++;
            }
        }
        int countElems(int l, int h){
            if(l >= 0 && h < this->len && l < h){
                int* p1 = (this->ptr)+l;
                int* p2 = (this->ptr)+h;
                int ctr = 0;
                while(p1 == p2){
                    ctr++;
                    p1++;
                }
                return ctr-1;
            }else{
                return 0;
            }
        }
        void displayElems(){
            for(int i = 0; i < this->len; i++){
                cout << this->ptr[i] << endl;
            }
        }
        void displayEven(){
            for(int i = 1; i < this->len; i+=2){
                cout << this->ptr[i] << endl;
            }
        }
};

int main(){
    int A[100];
    int* p = A;
    for(int i = 0;i < 100; i++){
        A[i] = 0;
    }
    Array a(p, 100);
    int w,b;
    cout << "Enter integers to count between" << endl; 
    cin >> w >> b;
    a.countElems(w,b);
    a.displayElems();
    a.displayEven();
}