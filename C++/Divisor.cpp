#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        if(n == 1)
        {
            int angka;
            cin >> angka;
            cout << angka * 2 << endl;
        }
        else
        {
            int arr[n];
            for(int i=0; i<n; i++)
            {
                cin >> arr[i];
            }
            sort(0,n);

        }


    }

    return 0;
}
