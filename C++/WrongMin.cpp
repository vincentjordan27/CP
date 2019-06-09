#include <bits/stdc++.h>
#include <cstdio>
#include<algorithm>
typedef long long int ll;
using namespace std;

int main()
{

    ll a , n,i,b;
    cin >> n >> a;

    for(i=1; i<=a; i++)
    {
        b = n%10;
        if(b == 0)
        {
            n /= 10;
        }
        else
            n -= 1;
    }

    cout << n << "\n";

    return 0;
}
