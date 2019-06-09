#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0 ;i<n ;i++)
    {
        string s;
        int coun=0,no;
        cin >> no;
        cin >> s;
        for(int i=0; i<no-1; i++)
        {
            if(s[i] != 'a' && s[i] != 'i' && s[i] != 'u' && s[i] != 'e' && s[i] != 'o' )
            {

                if(s[i+1] == 'a' || s[i+1] == 'i' || s[i+1] == 'u' || s[i+1] == 'e' || s[i+1] == 'o' )
                {
                    coun++;
                }
            }
        }
        cout << coun << endl;;
    }

    return 0;
}
