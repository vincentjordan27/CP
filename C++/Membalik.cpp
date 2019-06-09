#include <iostream>

using namespace std;
int revers(int n)
{
    int remainder;
    int reversedNumber = 0;
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    return reversedNumber;
}
int main()
{
    int n,s;

    cin >> n;
    cin >> s;
    int c =revers(n) + revers(s) ;
    cout << revers(c)<< endl;

    return 0;
}
