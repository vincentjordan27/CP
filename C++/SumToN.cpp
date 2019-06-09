#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void finds(int arr[],int length,int s)
{
    for(int i=0; i< (pow(2,length)); i++)
    {
        int sum = 0;

        for(int j=0; j< length; j++)
            if(((i >> j) & 1))
            sum += arr[j];

        if(sum == s)
        {
            cout << "YES" <<endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{

    int sum = 5;
    int arr[] = {-1,2,4,121};
    int length = sizeof(arr)/sizeof(int);

    finds(arr,length,sum);
    return 0;
}
