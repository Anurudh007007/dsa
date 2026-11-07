#include<iostream>
#include<vector>
using namespace std;

int main(){
    // //Vector implementation 
    // //METHOD 1
    // vector<int> vec1; // vector of size 0 (empty vector)
    // //METHOD 2
    // vector<int> vec2 = {1,2,3,4,5};
    // //METHOD 3
    // vector<int> vec3(5,0); //Initialized a vector of size 5 and each element = 0

    // for(int i: vec3){
    //     cout <<i<<endl;
    // }

    // //---------SIZE----------
    // cout<< vec3.size()<<endl; // vector.size() -- returns the size of the vector

    // // ------PUSHBACK ---> Pushes an element to the end of a vector
    // vec1.push_back(25);
    // cout<<"After pushback" << vec1.size() << endl;

    // //------POBBACK----> deletes an element from the end of the vector
    // vec1.pop_back();
    // cout<<"After popback" << vec1.size()  << endl;

    // cout << vec3.front() << endl; // Starting ke element ko print krna
    // cout << vec3.back() << endl; // Last ke element ko print krna
    
    // vec3.at(0); // This will give the value at that index

    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    cout << vec.size() << endl;
    cout << vec.capacity()<< endl;




}