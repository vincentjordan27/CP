#include<iostream>
#include<vector>

using namespace std;

int main()
{
    long long n,k,numodd,numeven;
    cin >> n >> k;
    if(n % 2 == 0)
        numodd = numeven = n / 2;
    else
    {
        numodd = n / 2 + 1;
        numeven = n / 2;
    }
    if( k <= numodd)
    {
        cout << 2 * (k-1) + 1 <<endl;
    }
    else
    {
        cout << (k - numodd) * 2 <<endl;
    }

    return 0;
}
