#include<iostream>

using namespace std;

int main()
{
    int n,k,solve=0,flag=0;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int b = n-1;
    for(int i=0; i<n ; i++)
    {
        if(arr[i] <= k && flag == 0)
        {
            solve++;
        }
        else if(arr[b] <= k)
        {
            flag = 1;
            solve++;
            b--;

        }
        else
            break;

    }

    cout << solve << endl;


    return 0;
}
