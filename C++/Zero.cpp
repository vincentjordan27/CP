#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,i;
    cin >> T;
    for(i=0; i<T; i++)
    {
        long long n,k,total=0;
        cin >> n >> k;
        while(n != 0)
        {

            if(n % k == 0)
                {
                    n /=k;
                    total++;
                }
            else
                {
                    total += n % k;
                    n -= n%k;
                }
        }
        //32483258325

        cout << total << endl;

    }

    return 0;
}
