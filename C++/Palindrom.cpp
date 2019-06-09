#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    int m = len/2,hitung=0,i,j;

    for(i = 0,j=len-1; i<len,j>=0; i++,j--)
    {
        if(s[i] == s[j] )
            hitung++;
    }
        if(hitung == m)
        cout << "YA\n";
        else
        cout << "BUKAN\n";


    return 0;
}
