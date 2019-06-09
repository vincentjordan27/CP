#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int coun = 0;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '4' || s[i] == '7')
            coun++;
    }

    if(coun == 7 || coun == 4)
        cout << "YES" << endl;
    else
        cout << "NO" <<endl;


    return 0;
}
