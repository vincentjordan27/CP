#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n= str.length();
    int hitung = 0,i;

    for(i=0; i<n; i++)
    {
        if(str[i] == 'a')
        {
            hitung += 1;
        }
    }

    cout << min(hitung*2-1,n) << endl;

    return 0;
}
