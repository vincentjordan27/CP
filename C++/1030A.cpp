#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,a,b=0;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a;
        if(a == 1)
        {
            b++;
            break;
        }
    }
    if(b==1)
        cout << "HARD"<< endl;
    else
        cout << "EASY" << endl;


    return 0;
}
