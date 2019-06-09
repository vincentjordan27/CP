#include<iostream>

using namespace std;

int main()
{
    long long a,b,coun=0;
    cin >> a >> b;
    coun = (a + b) * (b-a+1) / 2;
    cout << coun << endl;

    return 0;
}
