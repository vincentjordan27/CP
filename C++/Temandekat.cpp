#include <bits/stdc++.h>
#include <iostream>
#include <math.h>

using namespace std;
void dekat(int ArrX[],int ArrY[],int X,int P)
{
    int i,j;
    int ma=-10000001,mi=100000000,T;
    for(i=0; i<X-1; i++)
    {
        for(j=i+1; j<X; j++)
        {
            T = (pow(abs(ArrX[j] - ArrX[i]),P) + pow(abs(ArrY[j] - ArrY[i]),P));
            ma = max(T,ma);
            mi = min(T,mi);
        }
    }

    cout << mi << " " << ma << endl;
}
int main()
{
    int N , D,i,j;
    cin >> N >> D;
    int X[1001],Y[1001];
    for(i=0; i<N; i++)
    {
        cin >> X[i] >> Y[i];
    }
    dekat(X,Y,N,D);

    return 0;

}
