#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t],cnt=0;
    for(int i=0; i<t; i++)
    {
        cin >> arr[i];
    }
    for(int i=1; i<t; i++)
    {
        if(arr[i] > arr[i+1])
        {

            break;
        }
        else
        {
            cnt++;
        }
    }
    cout << cnt + 1 << endl;

    return 0;
}
