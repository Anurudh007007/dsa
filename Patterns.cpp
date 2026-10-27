#include <iostream>

class Patterns
{
public:
    int rows;
    int columns;
    int sides;

    Patterns(int rows, int columns){
        this->rows = rows;
        this->columns = columns;
    }

    Patterns (int sides){
        this->sides = sides;
    }

    void RegularPattern(){
        for (int i=0; i < rows; i++){
            for (int j = 0; j< columns; j++){
                std:: cout << "*";
            }
            std::cout<<std::endl;
        }
    }

    void SquarePattern(){
        for (int i=0; i<sides; i++){
            for (int j=0; j<sides; j++){
                std :: cout << "*";
            }
            std :: cout<<std:: endl;
        }
    }

    void NumberSqure(){
        for(int i=1; i<=sides; i++){
            for(int j=1; j<=sides; j++){
                std::cout << j;
            }
            std::cout<<std::endl;
        }
    }

    void Startriangle(){
        for(int i=1; i<=sides; i++){
            for(int j=1; j<=i; j++){
                std::cout << "*";
            }
            std::cout << std::endl;
            
        }
    }

    void Startrianglereverse(){
        for(int i=0; i<sides; i++){
            for(int j=sides; j>i; j--){
                std::cout<<"*";
            }
            std::cout << std::endl;
        }
    }

    void Numbertriangle(){
        for (int i=1; i<=sides; i++){
            for(int j=1; j<=i; j++){
                std::cout << j;
            }
            std::cout<<std::endl;
        }
    }

    void OddNumbertriangle(){
        for (int i=0; i<=sides; i++){
            for(int j=0; j<=i; j++){
                std::cout << (2*j+1);
            }
            std::cout<<std::endl;
        }        
    }

    void AlphabetSquare(){
        char a = 'A';
        for (int i=0; i<sides; i++){
            for(int j=0; j<sides; j++){
                std::cout << char('A'+j);
            }
            std::cout<<std::endl;
        }
    }

    void StarPlus(){
        int middle = ((int)sides/2) + 1;
        for(int i=1; i<=sides; i++){
            if (i == middle){
                for (int j = 1; j <= sides; j++){
                    std::cout << "*";
                }
                std::cout << std::endl;
            }
            else{

            
                for (int j =1; j<=sides; j++){
                    if (j == middle){
                        std::cout << "*";
                    }
                    else{
                        std::cout << ' ';
                    }
                    }
                std::cout << std::endl;
                }
            }
    }

    void Starplusoptimized(){
        int middle = ((sides/2) + 1);
        for (int i=1; i<=sides; i++){
            for (int j=1; j<=sides; j++){
                if (i == middle || j == middle){
                    std::cout << "*";
                }
                else{
                    std::cout <<' ';
                }
            }
            std::cout<<std::endl;
        
        }
    }


};



int main(){
    // Patterns rectangle (3,5);
    // p1.RegularPattern();
    Patterns square(5);
    // square.SquarePattern();
    // square.NumberSqure();
    // square.Startriangle();
    // square.Startrianglereverse();
    // square.Numbertriangle();
    // square.OddNumbertriangle();
    // square.AlphabetSquare();
    // square.StarPlus();
    square.Starplusoptimized();


    return 0;
}