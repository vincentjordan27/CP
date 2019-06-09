#include<bits/stdc++.h>
#include <iostream>
#include <math.h>

using namespace std;
int fungsi(int A,int B,int K, int x)
{
    int n;
    n = abs(A*x + B);
    if(n != 0)
    {
        return fungsi(A,B,K-1,x);
    }
    else
        return n;
}
int main()
{
    int A,B,K,x;
    cin >> A >> B >> K >> x;
    cout << fungsi(A,B,K,x) << endl;



    return 0;
}
