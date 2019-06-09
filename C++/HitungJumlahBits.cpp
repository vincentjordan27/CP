#include<iostream>

using namespace std;

unsigned int countsetbits(unsigned int x);

unsigned int countsetbitstotal(unsigned int n)
{
    int bitCount = 0;
    for(int i=0; i<=n ;i++)
    {
        bitCount += countsetbits(i);
    }

    return bitCount;
}

unsigned int countsetbits(unsigned int x)
{
    if(x == 0)
        return 0;
    else
        return(x % 2 == 0 ? 0 : 1) + countsetbits(x/2);
}

int main()
{
    int n;
    cin >> n;
    cout << countsetbitstotal(n) <<endl;


    return 0;
}
