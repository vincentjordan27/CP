#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    char s[101];
    int coun = 1;
    cin >> s;
    int n = strlen(s),i;
    sort(s,s+n);
    for(i=0; i<n-1; i++)
    {
        if(s[i] != s[i+1])
            coun++;
    }

    if(coun % 2 == 1)
     cout << "IGNORE HIM!" << endl;
     else
        cout << "CHAT WITH HER!" <<endl;


    return 0;

}
