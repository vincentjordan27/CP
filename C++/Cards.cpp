#include<iostream>

using namespace std;

int main()
{
    int a[5],cinc=0,cdic=0,er=0;
    for(int i=0; i<5; i++)
    {
        cin >> a[i];
        if(a[i] < 1 || a[i] > 13)
        {
            er++;
            break;

        }
    }
    for(int i=0; i<5; i++)
    {

        if(a[i] > a[i+1] )
            cdic++;
        else if(a[i] < a[i+1])
            cinc++;
    }
    if(cinc == 4)
        cout << "C" << endl;
    else if(cdic == 4)
        cout << "D" << endl;
    else if(er == 1)
       cout << "";
    else
        cout << "N" << endl;

    return 0;
}
