#include<iostream>
#include<algorithm>

// algorithm header files carries a bunch of header files in it
// It works on containers (headers or arrays), open half range (we need to specify first and last)
//minmax works as this - first the smallest one is given then the largest 
//for arrays, use minmax_element function as it returns the pointer pointing to 
//the minimum and maximum value. also when using minmax element we need to make sure that two variables are passed
// the first index and the last index
int main(){
    // int a = 42, b = 17;
    int arr[] = {1,2,3};

// pair datatype is inside the header <utility> but algorithm already includes it
    auto result = std::minmax_element(std::begin(arr), std::end(arr));
    std::cout << *(result.first) << " " << *(result.second);
    return 0;


}


