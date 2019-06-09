#include <iostream>

using namespace std;

int main()
{
    long long int a,b,jumlah = 0,t;
    cin >> t;
    if(t >= 1 && t <= 20)
    {
        for(int i=1; i<=t; i++)

        {
        cin >> a >> b;
        while(a != b)
        {
            a = a + 7 ;
            b = b - 5;

            if(b < a || a > b)
            {
                jumlah++;
                break;
            }


        }
        if(jumlah == 1)
            cout << "Case #" << i << ": impossible" << endl;
        else
            cout <<"Case #" << i << ": " << a << endl;
        }
    }

    return 0;
}
