#include<iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        if(i%2 != 0)
        {
            cout << i << "\n";
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}
