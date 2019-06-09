#include <iostream>

using namespace std;

int main()
{
    int n,m,i,n_odd = 0,m_odd = 0,n_even=0,m_even=0,ans=0;
    cin >> n >> m;
    for(i=0; i<n; i++)
    {
        int temp;
        cin >> temp;
        if(temp == 1) n_odd++;
        else if(temp%2 == 0) n_even++;
        else n_odd++;
    }
    for(i=0; i<m; i++)
    {
        int temp;
        cin >> temp;
        if(temp == 1) m_odd++;
        else if(temp%2 == 0) m_even++;
        else m_odd++;
    }

    ans += (m_odd <= n_even) ?  m_odd : n_even;
    ans += (n_odd <= m_even) ?  n_odd : m_even;

    cout << ans << endl;

    return 0;
}
