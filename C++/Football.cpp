#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n= s.length(),coun=1;;
    for(int i=0; i<n; i++)\
    {
        if(s[i] == s[i+1])
        {
            coun ++;
        }
        else
            coun = 0;
        if(coun == 6)
        {
            cout << "YES" << endl;
            return 0;
        }

    }
    cout << "NO" << endl;

    return 0;
}
