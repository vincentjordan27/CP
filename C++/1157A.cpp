#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,cou=0;
    cin >> n;
    while (n >= 10)
    {
        n++;
        while(n%10 == 0 ) n/=10;
        cou++;
    }
    cout << cou + 9 << endl;

    return 0;
}
