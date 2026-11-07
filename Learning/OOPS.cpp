#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int roll_no;
    float cgpa;

    Student(){
        // default constructor 
        // this constructor is called when we create an object without passing any parameters
        // when a constructor is created, the default constructor is not created by the compiler
        // then it needs to be created explicitly
    }; 

    // parameterized constructor
    Student(string n, int r){
        name = n;
        roll_no = r;
    }

    Student(string n, int r, float c){
        name = n;
        roll_no = r;
        cgpa = c; // This is multiple constructors, this is called constructor overloading
    }
    Student(int r, float c, string n){
        name = n;
        roll_no = r;
        cgpa = c; // This is multiple constructors, this is called constructor overloading
        // Same  thing except the order of parameters is different, this is called constructor overloading
    }
};

void print (Student s){
    cout << s.name << endl;
    cout << s.roll_no << endl;
    cout << s.cgpa << endl;
};

// void change(Student s){
//     s.name = "Anushka";
//     s.roll_no = 102;
//     s.cgpa = 1.2;
// }

// void change_pointer(Student &s){
//     s.name = "Anushka";
//     s.roll_no = 102;
//     s.cgpa = 1.2;
// }
int main(){
    Student s1("Anurudh", 101, 9.5);
    // s1.name = "Anurudh";
    // s1.roll_no = 101;
    // s1.cgpa = 9.5;

    Student s2("Anushka", 102, 1.2);
    // s2.name = "Anurudh";
    // s2.roll_no = 101;
    // s2.cgpa = 9.3;
    // change(s1);
    // change_pointer(s1); // pass by reference
    print(s1);

     // pass by value 
    return 0;

}