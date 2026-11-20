#include<iostream>
using namespace std;

template<typename T>
void add(T a, T b)
{
cout<<"Addition is:"<<a+b<<endl;
}

int main()
{
add(10, 30);
add(5.2, 2.3);
return 0;
}
