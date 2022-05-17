#include <iostream>
#include <fstream>
using namespace std;

void read(string fn){
    fstream file(fn,ios::in);
    string s;
    while(getline(file, s)){
        cout << s << endl;
    }
    file.close();
}


void write(string fn){
    fstream file(fn, ios::out);
    file << "Hello world" << endl;
    file.close();
    read(fn);
}

void append(string fn){
    fstream file(fn, ios::app);
    file << "Bye!" << endl;
    file.close();
    read(fn);
}

void ate(string fn){
    fstream file(fn, ios::ate);
    file << "Bye from ate!" << endl;
    file.close();
    read(fn);
}

void trunc(string fn){
    fstream file(fn, ios::out | ios::trunc);
    file << "Removed old, added new stuff" << endl;
    file.close();
    read(fn);
}

int main(){
    read("story.txt");
    write("delta.txt");
    append("delta.txt");
    ate("delta.txt");
    trunc("delta.txt");
    return 0;
}
