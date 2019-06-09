#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int A,B,maxi=0;
    cin >> A >> B;
    int X = min(A,B);
    int fact = 1;
    for(int i=1; i<=X; i++)
    {
        fact *= i;
    }

    cout << fact << endl;

    return 0;
}
