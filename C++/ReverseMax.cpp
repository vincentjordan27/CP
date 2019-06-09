#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int s;
        int maxn=0, remainder,index;
        cin >> s;

        if(s < 10)
                {
                    cout << s << endl;
                    continue;
                }
        for(int i=1; i<=s; i++)
        {
            int reversed=0;

            int n = i;
            while(n != 0)
            {
                remainder = n%10;
                reversed = reversed*10 + remainder;
                n /= 10;
            }
            if(reversed > maxn)
            {
                maxn = reversed;
                index = i;
            }


        }

        cout << index << endl;


    }


    return 0;
}
