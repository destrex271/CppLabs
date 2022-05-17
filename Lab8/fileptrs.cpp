#include <iostream>
#include <fstream>
using namespace std;

void exp(){
    ofstream ofs("story.txt", ios::app);
    long pos = ofs.tellp();
    ofs.seekp(12);
    pos = ofs.tellp();
    cout << pos << endl;
    ofs.close();
}

void fix(){
    ifstream ifs("story.txt");
    long pos = ifs.tellg();
    cout << pos << endl;
    ifs.seekg(10);
    pos = ifs.tellg();
    string at;
    while(getline(ifs, at)){
        cout << at << endl;
    }
    cout << pos;
}

int main(){
    exp();
    fix();
    return 0;
}