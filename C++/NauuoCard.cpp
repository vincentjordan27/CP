#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,nol=0;
    cin >> n ;
    int arr[2*n];
    for(int i=0; i<2*n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
        if(i < n && a == 0)
            nol++;
    }

    if(arr[n] == n)
        cout << nol <<endl;
    else
        cout << nol + n - 1 <<endl;


    return 0;
}
