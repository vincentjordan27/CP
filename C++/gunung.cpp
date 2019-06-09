#include<iostream>

using namespace std;

int main()
{
    int n,up,even=2;
    cin >> n;
    int down = n;
    for(int i=1; i<=n*(n-1)+1; i++)
    {
        if(i%2 == 1)
            cout << "*\n";
        else if(even != n+1)
        {
            for(int j=0; j<even; j++)
                cout << "*";
            even++;
            cout <<"\n";
        }
        else if(down != 2)
        {
            for(int j=0; j<down-1; j++)
            {
                cout << "*";
            }
                down--;

                cout << "\n";

        }

    }

    return 0;
}
