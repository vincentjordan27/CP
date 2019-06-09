#include<iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        long long n;
        cin >> n ;
        if(n == 1)
            {
                cout << "0" <<endl;
                continue;
            }
        int total = 0;
        while (n != 1)
        {
            total++;
            if(n % 2 == 0)
                n = n / 2;
            else if(n % 3 == 0)
                n = 2*n/3;
            else if(n % 5 == 0)
                n = 4*n/5;
            else
            {
                total = 0;
                break;
            }
        }
        if(total == 0)
            cout << "-1" <<endl;
        else
            cout << total << endl;
    }

    return 0;
}
