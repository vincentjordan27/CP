#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
        for(int i=0; i <T; i++)
        {
            int n;
            char s[10001];
            cin >> n;
            cin >> s;
            if(n < 11)
            {
                cout << "NO" << endl;
                continue;
            }
            int coun = 0;
            for(int i=0; i<n; i++)
            {
                if(s[i] != '8')
                    coun++;
                else
                    break;
            }
            int total = n - coun;
            if(total < 11 )
                cout << "NO" << endl;
            else
                cout << "YES" << endl;



        }

    return 0;
}
