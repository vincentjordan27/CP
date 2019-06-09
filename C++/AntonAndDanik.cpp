#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
    int N,A=0,D=0;
    cin >> N;
    char arr[N];
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<N; i++)
    {
        if(arr[i] == 'A')
            A++;
        else if(arr[i] == 'D')
            D++;
    }
    if( A > D)
        cout << "Anton" << endl;
    else if(D > A)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;


    return 0;
}
