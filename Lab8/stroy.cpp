#include <iostream>
#include <fstream>

using namespace std;


int main(){
    string filename = "story.txt";
    // Reading from the file
    ifstream ifs(filename);
    string ln;
    while(getline(ifs,ln)){
        cout << ln << endl;
    }
    ifs.close();
}