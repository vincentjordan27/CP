#include <iostream>

using namespace std;

int main()
{
    int person,mini,i;
    cin >> person >> mini;
    int contest[person];
        int total = 0;

        for(i=0; i<person; i++)
        {
            cin >> contest[i];
        }
        for(i=0; i<person; i++)
        {
            if(contest[i] >= contest[mini-1] && contest[i] > 0  )
                total++;
        }
        cout << total << "\n";



    return 0;
}
