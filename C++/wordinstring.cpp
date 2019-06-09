#include <iostream>
#include <string>
using namespace std;
int substring (string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    for(int i=0; i<=N-M; i++)
    {
        int j;
        for(j=0; j<N; j++)
            if(s2[i+j] != s1[j])
                break;

        if(j == M)
        {
            return i;
            break;
        }
    }

    return 2;
}
int main()
{
    string s;
    cin >> s;
    string sub = "ideafuse";
    int res = substring(sub,s);

    if(res == 2)
        cout << "-1" << endl;
    else
        cout << res+1 << endl;

    return 0;
}
