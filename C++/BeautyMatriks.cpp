#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int A[5][5],coun=0;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> A[i][j];
            if(A[i][j] == 1)
                coun += abs(i - 3 + 1) + abs (j - 3 + 1);
        }
    }


    cout << coun << endl;

    return 0;
}
