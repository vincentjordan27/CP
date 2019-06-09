#include<bits/stdc++.h>
#include<cctype>
#include<string>
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    char s[101];
    cin >> s;
    int n= strlen(s);
    for(int i=0; i<n; i++)
    {
        char c = s[i];
        if(isupper(c))
            putchar(tolower(c));
        else
            putchar(toupper(c));
    }
    cout << endl;

    return 0;
}
