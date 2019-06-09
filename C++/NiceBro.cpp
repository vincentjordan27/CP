#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int T,coun=0,mins=10000;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        int N;
        cin >> N;
        mins = min(mins,N);
        coun += N;
    }

    cout << coun - mins << endl;


    return 0;
}
