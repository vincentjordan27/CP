#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int i=0;
    while(s[i] != '\0')
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9' )
        {
                cout << "YES" << endl;
                return 0;
        }
        else
            i++;
    }
    cout << "NO" <<endl;

    return 0;
}