#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[100],mins = 0 , maxs = 0 ;
    cin >> n;
    for(int i=0; i<n; i++)
    {
       cin >> arr[i];
    }
    maxs = arr[0];
    mins = arr[0];
    for(int i=0; i<n; i++)
    {
       if(arr[i] > maxs )
        maxs = arr[i];
       else if(arr[i] < mins)
        mins = arr[i];
    }

    cout << maxs << " " << mins << endl;

    return 0;
}
