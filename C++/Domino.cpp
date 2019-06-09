#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{

    int M,N;
    cin >> M >> N;
    if(N%2 == 0)
        cout << M * (N/2) << endl;
    else if(M%2 == 0)
        cout << N * (M/2) << endl;
    else
        cout << (N/2 * M) + (M/2) << endl;
    return 0;
}
