#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int T,i,j;
    cin >> T;
    for(i=0; i<T; i++)
    {
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        bool yes = true;
        for(j=0; j< s.length() - 1; j++)
        {
            if(abs((int(s[j])) - (int)(s[j+1])) != 1 ) yes = false;

        }
        cout << (yes ? "Yes":"No") << endl;
    }


    return 0;
}
