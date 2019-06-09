#include <iostream>

using namespace std;

int main()
{
    int a,b,x;
    cin >> a >> b;
    if(a > b)
    {
        cout << b;
        x = a - b;
        cout << " " << x/2 << endl;
    }
    else if( a < b)
    {
        cout << a;
        x = b - a;
        cout << " " << x/2 << endl;
    }
    else if( a == b)
    {
        cout << a << " 0" << endl;
    }




    return 0;
}
