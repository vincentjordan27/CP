#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,c=0,i;
    cin >> n;
    string s,r;
    cin >> s;

    for(i=0 ;i<n ;i++)
    {
        r += s[i];

        i += c++;
    }

    cout << r << endl;


    return 0;
}
