#include <iostream>
#include <vector>

using namespace std;

class Interpolations {
public:
    int n;
    int ix;
    vector<int> x;
    vector<int> y;
    double result;
    double term;

    Interpolations(int ix, int n, vector<int> x, vector<int> y) {
        this->x = x;
        this->y = y;
        this->n = n;
        this->ix = ix;
        this->result = 0.0;
    }

    void LagrangesInterpolation() {
        for (int i = 0; i < n; i++) {
            term = 1.0;
            
            for (int j = 0; j < n; j++) {
                if (j != i) {
                    term = term * ((double)(ix - x[j]) / (double)(x[i] - x[j]));
                }
            }
            term = term * y[i];
            result += term;
        }

        cout << "Interpolated value = " << result << endl;
    }
};

int main() {
    int n, ux;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter number you want to be interpolated: ";
    cin >> ux;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter x" << i << ": ";
        cin >> a[i];
    } 

    for (int i = 0; i < n; i++) {
        cout << "Enter y" << i << ": ";
        cin >> b[i];
    }

    Interpolations d1(ux, n, a, b);
    d1.LagrangesInterpolation();

    return 0;
}