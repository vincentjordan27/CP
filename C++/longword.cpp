#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T,i;
    cin >> T;

    for(i=1; i<=T; i++)
    {
        string s;
        cin >> s;
        int n = s.length();
        int hitung = 0,i;
        for(i=1; i<n-1; i++)
        {
            hitung++;
        }
        if(n > 10)
        cout << s[0] << hitung << s[n-1] << "\n";
        else
            cout << s << "\n";
    }

    return 0;
}
