#include <iostream>

using namespace std;

int main()
{
    int a,i,j;
    cin >> a;
    int b=0,c=0,d=0;
    for(i=1; i<a; i++)
    {
        for(j=1; j<a; j++)
        {
            if(i + j == a)
            {
                if(i % 2 == 0 && j % 2 == 0)
                {
                   d += 1;
                   break;
                }
            }
        }
    }
    if(d >= 1)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
