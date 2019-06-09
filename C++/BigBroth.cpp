#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int sum =0;

    while( a <= b)
    {
        a *= 3;
        b *= 2;
        sum++;
    }
    cout << sum << endl;

    return 0;
}
