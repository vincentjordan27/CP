#include<iostream>

using namespace std;

int main()
{
    int T,xsum=0,ysum=0,zsum=0;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        xsum += a;
        ysum += b;
        zsum += c;
    }

    if(xsum == 0 && ysum==0 && zsum==0)
        cout << "YES" <<endl;
    else
        cout << "NO" << endl;


    return 0;
}
