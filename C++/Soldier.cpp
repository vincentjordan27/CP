#include<iostream>

using namespace std;

int main()
{
    int k,n,w,coun=0,harga;
    cin >> k >> n >> w;
    for(int i=1; i<=w; i++)
    {
        harga = k * i ;
        coun+= harga;


    }
    if(coun - n < 0)
        cout << "0" <<endl;
    else
    cout <<coun - n << endl;

    return 0;
}
