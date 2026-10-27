#include <iostream>
#include <vector>

using namespace std;

class Interpolation{
public:
    int n;
    int ix;
    vector <int> x;
    vector <int> y;
    double result;

    Interpolation(int ix, int n, vector <int> x, vector <int> y ){
        this -> x = x;
        this -> y = y;
        this -> n = n;
        this -> ix = ix;
    }

    void LagrangesInterpolation(){
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if 
            
        }    
        }
    }


};

int main(){
    int n, ux;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter number you want to be interpolated";
    cin >> ux;

    vector <int> a(n);
    vector <int> b(n);

    for (int i=0; i<n; i++){
        cout << "Enter x" << i << endl;
        cin >> a[i];
        cout << "Enter y" << i << endl;
        cin >> b[i];
    }

    Interpolation d1 (ux, n, a, b);

    d1.LagrangesInterpolation();
    



    return 0;
}