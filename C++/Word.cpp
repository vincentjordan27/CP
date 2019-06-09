#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{

    string s,r;
    int sm=0,bg=0;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        char c = s[i];
        if(isupper(c) )
        {
            bg++;
        }
        else
        {
            sm++;
        }
    }

    if(sm >= bg)
    {
        for(int i=0; i<s.length(); i++)
            {
                char c = s[i];
                r += tolower(c);

            }
    }
    else
    {
        for(int i=0; i<s.length(); i++)
            {
                char c = s[i];
                r += toupper(c);

            }
    }

    cout << r << endl;

    return 0;
}
