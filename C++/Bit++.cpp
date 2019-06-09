#include<string>
#include<iostream>

using namespace std;

int main()
{
    int n,x=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        if(s[0] == '+' || s[2] == '+')
            x+= 1;
        else if(s[0] == '-' || s[2] == '-')
            x-= 1;
    }

    cout << x << endl;

    return 0;
}
