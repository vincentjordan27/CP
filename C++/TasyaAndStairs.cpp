#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;
    int n,coun=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i+1] == 1 )
        {
            v.push_back(arr[i]);
            coun++;
        }
        if(i==n-1)
        {
            v.push_back(arr[i]);
            coun++;
            break;
        }

    }
    cout << coun << endl;
    for(int i=0; i<coun; i++)
    {
        cout << v[i] << " " ;

    }
    cout << endl;


    return 0;
}
