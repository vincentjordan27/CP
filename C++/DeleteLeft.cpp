#include<iostream>
#include<string>

using namespace std;

int main()
{
    string f,s;
    cin >> f >> s;
    int w = 0;

    while(true)
    {
        int i = f.length() - w - 1;
        int j = s.length() - w - 1;
        if(i >= 0 && j >= 0 && f[i] == s[j])
            w++;
        else
            break;
    }

    cout << f.length() + s.length() - 2*w << endl;

    return 0;
}
