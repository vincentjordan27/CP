#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n,coun = 0;
    string s;

    cin >> n >> s;
    for(int i=0; i<n; i++)
    {
        if(s[i] == s[i+1])
            coun++;
    }

    cout << coun << endl;
    return 0;
}
