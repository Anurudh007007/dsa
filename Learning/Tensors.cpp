#include <iostream>

int main(){
    // declaration int a[rows]
    const int rows = 3;
    const int columns = 4;
    int a[rows][columns] = {{1,2,3,12} , {4,5,6,11}, {7,8,9,10}};

    // accessing row wise

    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            std::cout<<a[i][j] << " ";
        }
        std::cout<< std::endl << std::endl;
    };

    // accessing column wise

    for (int i = 0; i<columns; i++){
        for (int j=0; j<rows; j++){
            std::cout<<a[j][i] << std::endl;
        }
    }









    return 0;
}