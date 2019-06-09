#include<iostream>

using namespace std;
bool prime(int x)
{
    bool flag = true;
    for(int i=2; i*i <=x; i++)
    {
        if(x%i == 0)
            flag = false;
    }
    return flag;
}

int main()
{
    int a,b,i;
    cin >> a >> b;
    for(i=a+1;;i++)
        if(prime(i))
        break;
    if(i == b)
        cout << "YES" <<endl;
    else
        cout <<"NO" <<endl;


    return 0;
}
