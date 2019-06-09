#include <bits/stdc++.h>
#include <string>

using namespace std;
int palindrom(string s,int awal,int akhir)
{
    int len = s.length();
    int m = len/2,hitung=0;

    if(s[awal] == s[akhir-1])
    {
        hitung++;
        awal++;
        akhir--;
        palindrom(s,awal,akhir);
    }
        if(hitung == m)
        cout << "YA\n";
        else
        cout << "BUKAN\n";

}
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    palindrom(s,0,n);


    return 0;
}
