#include<iostream>

using namespace std;

int main()
{
    int start,first,second,third;
    cin >> start >> first >> second >> third;
    while(start || first || second || third)
    {
        cout << (1080 + ((start - first + 40) % 40 + (second - first + 40) % 40 + (second - third + 40) %40 ) * 9) << endl;
        cin >> start >> first >> second >> third;
    }

    return 0;
}
