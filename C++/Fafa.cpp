#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int N,i,sum=0;
    cin >> N;
    for(i=1; i<N; i++)
    {
        if(N % i == 0)
        {
            sum++;
        }
    }

    cout << sum << endl;

    return 0;
}
