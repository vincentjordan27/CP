#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int n,i;
    cin >> n;
    vector <int> v(n);

    for(i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    if(n == 2)
        cout << "0" << endl;
    else
        cout << min(v[n-1] - v[1],v[n-2]-v[0]) << endl;


    return 0;
}
