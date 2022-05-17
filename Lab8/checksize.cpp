#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream ifs1("a1.bin",ifstream::binary), ifs2("a1.txt");
    string st;
    ifs1.seekg(0, ios::end);
    ifs2.seekg(0, ios::end);
    long a1 = ifs1.tellg();
    long a2 = ifs2.tellg();
    cout << a1 << " " << a2 << endl;
    return 0;
}