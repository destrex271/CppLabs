#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream ofs("test.h");
    string cont = "#include <iostream>\nusing namespace std;\nvoid test(){cout \"Hello from the header file\"}";
    ofs << cont << endl;
    ofs.close();
}