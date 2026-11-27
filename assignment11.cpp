#include <iostream>
using namespace std;

template <class T>
void swapValues(T a , T b)
{
    cout<< "Before swapping: " << a << " " << b; 
    T temp;
    temp = a;
    a = b;
    b = temp;

    
    cout << "\nAfter swapping: " << a << " " << b;
}

int main()
{
    

    swapValues(12, 64);

    

    return 0;
}
