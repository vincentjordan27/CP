#include<iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N],B[N],sum[N];
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }
    for(int i=0; i<N; i++)
    {
        cin >> B[i];
    }
    for(int i=0; i<N; i++)
    {
        sum[i] = A[i] + B[i];
    }
    for(int i=0; i<N; i++)
    {
        if(i == N - 1)
        cout << sum[i] << endl;
        else
            cout <<sum[i] << " ";
    }


    return 0;
}
