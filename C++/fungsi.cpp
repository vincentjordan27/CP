#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;
int fungsi(int A,int B, int K, int x)
{
    int n = abs(A*x + B);
    K--;
    if(K != 0)
        return fungsi(A,B,K,n);
    else
        return n;
}
int main()
{
    int A,B,K,x;
    cin >> A >> B >> K >> x;
    if( A >= -5 && A <= 5 && B >= -5 && B <= 5 && x >= -5 && x <= 5 && K >= 1 && K <= 5)
    {
    cout << fungsi(A,B,K,x) << endl;
    }
    return 0;
}
