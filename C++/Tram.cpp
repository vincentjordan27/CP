#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,coun=0,maxn=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin >> a >> b;
        coun -= a;
        coun += b;
        maxn = max(maxn,coun);
    }

    cout << maxn << endl;

    return 0;
}
