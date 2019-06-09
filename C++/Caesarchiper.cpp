#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s,r;
    int n;
    cin >> s >> n;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] + n > 122 )
        {
            r += (s[i] + n - 26);
            continue;

        }
        else
        r += (s[i] + n);
    }

    cout << r << endl;

    return 0;
}
