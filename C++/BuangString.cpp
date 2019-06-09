#include<bits/stdc++.h>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
   string s,sub,r;
    int coun = 0;
    cin >> s >> sub;
    for(int i=0; i<s.length(); i++)
    {
        for(int j=0; j<sub.length(); j++)
        {
            if((sub[j] == s[i] && sub[j+1] == s[i+1]) )
            {
                continue;

            }
            else if(sub[j] == s[i] && sub[j-1] == s[i-1])
            {
                continue;
            }


        }
        if(coun == 1)
        {
            coun = 0;
            continue;
        }
        else
            r += s[i];

    }

    cout << r << endl;
    return 0;
}
