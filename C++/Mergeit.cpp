#include<iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        int n;
        cin >> n;
        int sum = 0,sisa=0,lebih =0;
        for(int j=0; j<n; j++)
        {
            int a;
            cin >> a;
            if(a%3 == 0)
                sum++;
            else if(a < 3)
            {
                sisa += a;
                if(sisa % 3 == 0)
                {
                    sum += sisa / 3;
                    sisa = 0;
                }

            }
            else
            {
                if( (a + sisa) % 3 == 0)
                {
                    sisa = 0;
                    sum++;
                }
                else
                {
                    lebih += a;
                    if(lebih % 3 == 0)
                    {
                        sum++;
                        lebih = 0;
                    }
                }

            }
        }

        cout << sum << endl;
    }

    return 0;
}
