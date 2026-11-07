#include <iostream>

using namespace std;

class Student{
public:
    string name;
    int rno;
    float marks;

    Student(string name, int rno, float marks){
        this->name = name;
        this ->rno = rno;
        this ->marks = marks;
    }
};

void change(Student s){ // Pass by value 
    s.name = "Riya";
}

int main(){
    Student s( "Anurudh", 24, 96.2);
    cout << s.name;
    return 0;

}