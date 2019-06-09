#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,R,i,a;
    cin >> N >> R;
    for(i=0; i<N; i++)
    {
        cin >> a;
        if(a >= R)
        {
            cout << "Good boi\n";
        }
        else
            cout << "Bad boi\n";
    }

    return 0;
}
