#include <iostream>

using namespace std;

class Distance{
    public:
        int x,y;
        Distance(int x = 0, int y = 0){
            this->x = x;
            this->y = y;
        }
        Distance operator -(Distance &d2){
            Distance d3;
            d3.x = x - d2.x;
            d3.y = y - d2.y;
            return d3;
        }
};
