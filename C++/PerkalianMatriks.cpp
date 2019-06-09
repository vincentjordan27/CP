#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int i,j,l,a,b,p;
    int one[101][101],two[101][101],mult[101][101];

    cin >> a >> b >> l;
    for(i=0; i<a; i++)
    {
        for(j=0;j<b;j++)
        {
            cin >> one[i][j];
        }
    }
    for(i=0; i<b; i++)
    {
        for(j=0;j<l;j++)
        {
            cin >> two[i][j];
        }
    }
    for(i=0; i<b; i++)
    {
        for(j=0;j<l;j++)
        {
            mult[i][j] = 0;
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0;j<l;j++)
        {
            for(p=0; p<b; p++)
                mult[i][j] += one[i][p] * two[p][j];
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0;j<l;j++)
        {
            if(j > 0)
                cout << " ";
            if(j == l - 1)
                cout << mult[i][j];
            else
                cout << mult[i][j];
        }
        cout << "\n";
    }

    return 0;
}
