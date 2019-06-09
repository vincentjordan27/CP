#include<iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        int A,B,sum = 0;
        cin >> A >> B;
        if( B > A)
        {
            int temp;
            temp = A;
            A = B;
            B = temp;
        }
        for(int i=B+1; i<A; i++)
        {
            if(i % 2 == 1)
                sum += i;
        }
        cout << sum << endl;
    }

    return 0;
}
