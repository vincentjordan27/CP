#include <iostream>

using namespace std;

int main()
{
    int people,i ,one;
    int total = 0;
    cin >> people;
    for(i=0; i<people; i++)
    {
        cin >> one;
        total += one;
    }
    cout << "Total Age: " << total << "\n";
    cout << "The average age is " << (float)total/people;
}
