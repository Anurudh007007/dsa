#include <iostream>
using namespace std;

class Vector
{
public:
    int size;
    int* arr;
    int capacity;
    
    Vector()
    {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add_last(int ele)
    {
        if (size == capacity)
        {
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i=0; i<size; i++)
            {
                arr2[i] = arr[i];
            }
            arr = arr2;
        
        }
        arr[size++] = ele;
    }
    
    void print()
    {
        for(int i=0; i<size; i++)
        {
            cout << arr[i] << " " << endl;
        }       
    }
    int get(int idx)
    {
        if (idx > size)
        {
            cout << "Index out of range";
        }
        return arr[idx];
    }
};

int main(){
    Vector v;
    v.add_last(5);
    v.print();

}

