#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;

    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i] != s2[i])
            cout << "1";
        else if(s1[i] == 1 && s2[i] == 1)
        {
            cout << "0";
        }
    }


    return 0;
}
