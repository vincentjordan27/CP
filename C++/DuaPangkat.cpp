#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = 1;
    while (n > m)
    {
        m = m * 2;
    }
    if(n == m)
        cout << "ya" << endl;
    else
        cout << "bukan" << endl;

    return 0;
}
