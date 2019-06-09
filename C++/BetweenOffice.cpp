#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
    int N,s=0,f=0;
    cin >> N;
    char arr[N];
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<N; i++)
    {
        if(arr[i] == 'S' && arr[i+1] == 'F')
            s++;
        else if(arr[i] == 'F' && arr[i+1] == 'S')
            f++;
    }
    if( s > f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    return 0;
}
