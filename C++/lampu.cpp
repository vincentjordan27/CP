#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll a;
    cin >> a;
    int hitung =0;
    for(int i=1; i<=a; i++)
    {

        if(a % i == 0)
        {
            hitung ++;
        }
    }
    if(hitung % 2 == 0)
    {
        cout << "Lampu Mati\n";
    }
    else
        cout << "Lampu Menyala\n";

    return 0;
}
