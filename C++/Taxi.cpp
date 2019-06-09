#include<iostream>

using namespace std;

int main()
{
    int n,dua=0,satu=0,tiga=0,total=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        if(a == 1)
            satu++;
        else if(a == 2)
            dua++;
        else if(a == 3)
            tiga++;
        else
            total++;
    }
    while(satu > 0 && tiga > 0)
    {
        satu--;
        tiga--;
        total++;
    }
    while(dua >= 2)
    {
        dua -= 2;
        total++;
    }
    while(satu >= 2 && dua >= 1)
    {
        satu -= 2;
        dua -= 1;
        total++;
    }
    while(satu >= 4)
    {
        satu -= 4;
        total++;
    }
    while(tiga >= 1)
    {
        tiga -= 1;
        total++;
    }

    if(satu >= 1 || dua >= 1)
        total += 1;

    cout << total << endl;


    return 0;
}
