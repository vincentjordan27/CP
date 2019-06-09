#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <ctype.h>

using namespace std;

int main()
{
    char s[101];
    cin >> s;
    int n=strlen(s),i,j=0,a=0;
    char out[101];
    for(i=0; i<n; i++)
    {
        if(isupper(s[i+1]))
        {
            b++;
        }
        if(a==1)
        {
            out[j] = toupper(s[i]);j++;

            a = 0;
            continue;
        }
        if(s[i] != '_' )
        {
            out[j] = s[i];
            j++;

        }
        else
        {

            a++;
        }

        /*if(s[i] != '_')
        {
            out[j] = s[i];
            j++;

        }
        else
        {
            ;
        }*/


    }
    out[j] = '\0';

    cout << out << endl;

    return 0;
}
