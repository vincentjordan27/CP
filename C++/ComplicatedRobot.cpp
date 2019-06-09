#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    string s;
    int x=0,y=0;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'N')
            y++;
        else if(s[i] == 'S')
            y--;
        else if(s[i] == 'E')
            x++;
        else if(s[i] == 'W')
            x--;
    }

    cout << abs(x) + abs(y) << endl;

    return 0;
}
