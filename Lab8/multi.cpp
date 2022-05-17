#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream file("test.txt", ios::in | ios::out);
    file << "Hello Everyone!\nBye!" << endl;
    file.close();
    file.open("test.txt", ios::in);
    string st;
    while(file){
        getline(file, st);
        cout << st << endl;
    }
    file.close();
}