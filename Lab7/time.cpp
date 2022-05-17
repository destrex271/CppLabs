#include <iostream>
using namespace std;


class Time{
    public:
        int h,m,s;
        Time(int h = 0, int m = 0, int s = 0){

        }
        void show(){
            cout << h << ":" << m << ":" << s << endl;
        }
        Time operator +(Time &d){
            Time b;
            int s_sum = this->s + d.s;
            int s_car = 0;
            if(!(s_sum < 60)){
                s_sum = 60 - s_sum;
                s_car += 1;
            }
            int m_sum = this->m + d.m + s_car;
            int m_car = 0;
            if(!(m_sum < 60)){
                m_sum = 60 - m_sum;
                m_car++;
            }
            int h_sum = this->h + d.h + m_car;
            b.h = h_sum;
            b.m = m_sum;
            b.s = s_sum;
            return b;
        }
};



int main(){
    Time t(5,15,34), t2(9,53,58);
    Time t3;
    t3 = t + t2;
    t3.show();
    return 0;
}

