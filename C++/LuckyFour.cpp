#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int j=0; j<T; j++)
    {
    string s;
    cin >> s;
    int hitung = 0,i;
    int len = s.length();
    for(i=0; i<len; i++)
    {
        if(s[i] == '4')
        {
            hitung++;
        }
    }
    cout << hitung << "\n";
    }

    return 0;
}
