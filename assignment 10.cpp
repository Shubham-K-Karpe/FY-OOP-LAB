#include <iostream>
using namespace std;


template <class T>
T larger(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Larger student mark: " << findLarger(85, 90) << endl;

    cout << "Larger product price: " << findLarger(45.5, 60.5) << endl;

    cout << "Larger sensor reading: " << findLarger(25.5, 20.5) << endl;

    return 0;
}



