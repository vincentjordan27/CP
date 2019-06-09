#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;
int N,arr[105],coun=0;
int main()
{

    while(scanf("%d", &arr[N]) != EOF)
    {
        N++;
        coun++;
    }
    for(int i=coun-1; i>=0; i--)
    {
        cout << arr[i] << endl;
    }


}
