#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void addToFile(string fn){
    ofstream fout(fn);
    while(fout){
        string st;
        cin >> st;
        if(st == "exit"){
            break;
        }
        fout << st << " ";
    }
    fout.close();
}

void readFromFile(string fn){
    ifstream ifs(fn);
    string ln;
    while(getline(ifs, ln)){
        cout << ln << endl;
    }
}

int main(){
    string fn = "text.txt";
    addToFile(fn);
    readFromFile(fn);
}