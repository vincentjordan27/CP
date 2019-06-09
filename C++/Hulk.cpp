#include <iostream>
#include<string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for(int i=0; i<N; i++)
    {


        if(i% 2 == 0)
        {
            cout << "I hate ";

        }
        else
        {
            cout << "I love ";

        }
        if( i!= N-1)
            cout << "that ";
        else
            cout << "it ";
    }

    cout << "\n";

    return 0;
}
