#include<iostream>
#include<string.h>

using namespace std;

// struct Student{
//     private:
//         string name;
//         int roll;
//         double marks;
//     public:
//         void setStudent(string nam, int rol, double mark){
//             name = nam;
//             roll = rol;
//             marks = mark;
//         }

//         void getStudentData(){
//             cout << this->name << endl << this->roll << endl << this->marks << endl;
//             cout << "-------------------------------------------------------------";
//         }
// };

class Student{
    private:
        string name;
        int roll;
        double marks;
    public:
        void setStudent(string nam, int rol, double mark){
            name = nam;
            roll = rol;
            marks = mark;
        }
        void getStudentData(){
            cout << this->name << endl << this->roll << endl << this->marks << endl;
            cout << "-------------------------------------------------------------";
        }
};


int main(){
    Student s[3];
    for(int i = 0; i < 3; i++){
        string name;
        int roll;
        double marks;
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter roll number : ";
        cin >> roll;
        cout << "Enter marks : ";
        cin >> marks;
        s[i].setStudent(name, roll, marks);
    }
    for(int i = 0; i < 3; i++){
        s[i].getStudentData();
    }
    return 0;
}