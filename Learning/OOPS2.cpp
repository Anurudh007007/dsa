#include <iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;

//     Cricketer(string name, int runs){
//         name = name;
//         runs = runs;     // This will return garbage value because the local variable name and runs are shadowing the class members name and runs. 
//     };
// };

    Cricketer(string n, int r){
        this->name = n;
        this->runs = r;     //this keyword is used to refer to the current object of the class.
    };
    
    void print(){
        cout << this -> name << endl; cout << this -> runs << endl;
    }
};
int main(){
    Cricketer c1("Virat", 250000);
    c1.print();

    Cricketer* p1 = &c1;
    cout << c1.runs << endl;
    cout << (*p1).runs;

    int *ptr = new int(96); // Dynamic allocation
    Cricketer *c2 = new Cricketer("Rohit", 200000); // Dynamic allocation
    // koi naam nhi h is variable ka jisme store kra gya h
    c2->print();

    int x = 6; int* p = &x;
    cout<< (*p) << endl;
    //or we can also write *p as p->;
    cout << p->print() <<endl;
};