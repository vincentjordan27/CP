#include <bits/stdc++.h>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    int a = rand()%100;
    int b = rand()%100;

    cout << a << "\n";
    cout << b << "\n";

    int user;
    cin >> user;

    if(user == a + b)
    {
        cout <<"You are right\n";
    }
    else
        cout << "Wrong Answer\n";

    return 0;
}
