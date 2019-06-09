#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, choice,i;
    cin >> N >> choice;\

    for(i=1; i<=N; i++)
    {
        if(i % choice == 0)
        {
            cout << "*";
            if (i < N) {
              cout << " ";
            } else {
              cout << "\n";
            }
        }
        else
        {
            cout << i ;
            if (i < N) {
              cout << " ";
            } else {
              cout << "\n";
            }
        }
    }

    return 0;
}
