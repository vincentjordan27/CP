#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,i,j;

    cin >> N;
    long long int arr[N];

    for(i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    int maxi = 0;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(arr[i]%arr[j] > maxi)
                maxi = arr[i] % arr[j];
        }

    }

    cout << maxi << "\n";

    return 0;
}
