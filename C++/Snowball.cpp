#include<iostream>

using namespace std;

int main()
{
    int w,h,w1,h1,w2,h2;
    cin >> w >> h >> w1 >> h1 >> w2 >> h2;
    int ans = w;
    for(int i=h; i>=0; i--)
    {
        ans+= i;
        if(i == h1)
           ans -= w1;
        if(i == h2)
            ans -= w2;
        if(ans < 0)
            ans = 0;
    }

    cout << ans << endl;

    return 0;
}
