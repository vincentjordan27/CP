#include<iostream>
using namespace std;
void swaps( int* x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 50,b=80;
    swaps(&a,&b);

    cout << a << " " << b <<endl;

    return 0;
}
