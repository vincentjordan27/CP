#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,i,j;
    cin >> N;
    for(i=0; i<N; i++ )
    {

        int temp,y=0;
        cin >> temp;
        if(temp > 1000000 || temp < 1)
            continue;

        if(temp < 2)
        {
            cout << "BUKAN\n";
            y++;
        }

        else{
            for(j=2; j<=sqrt(temp); j++)
                {
                    if(temp % j == 0)
                    {
                       cout << "BUKAN\n";
                       y++;
                       break;
                    }

                }

        }
        if(y == 0)
            cout << "YA\n";


        }

    return 0;
}
