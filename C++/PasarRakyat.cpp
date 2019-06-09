#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,maxn=1,next=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
        if(a > maxn)
            maxn = a;
    }
    for(int i=1; i<=(maxn*maxn); i++)
    {
        int sama = 0;
        for(int j=0; j<n; j++)
        {
            if(i%arr[j] == 0)
                sama++;
        }
        if(sama == n)
        {
            if(i > next)
                next = i;
                break;
        }
    }

    cout << next <<endl;

    return 0;
}
