#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++)
    {
        char c = s[i];
        if(i=0)
        {
            if(islower(c))
                toupper(c);
        }
        else{
            if(isupper(c))
                tolower(c);

            }
    }

    cout << s << endl;

    return 0;
}
