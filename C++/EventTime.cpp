#include<iostream>


using namespace std;

int main()
{
    string s;
    int hari,jam,menit,detik;
    int hari2,jam2,menit2,detik2;
    int h=0,j=0,m=0,d=0;
    bool  verj = false, verm = false, verd =false;

    cin >> s >> hari;
    cin  >> jam >> s >> menit >> s >> detik;
    cin >> s >> hari2;
    cin  >> jam2 >> s >> menit2 >> s >> detik2;

    if(jam >  jam2)
        verj = true;
    if(menit > menit2)
        verm = true;
    if(detik > detik2)
        verd = true;

    while(hari != hari2)
    {
        h++;
        hari++;
    }


    while(jam != jam2)
    {
        j++;
        jam++;
        if(jam == 25)
            jam = 1;
    }
    while(menit != menit2)
    {
        m++;
        menit++;
        if(menit == 61)
            menit = 1;
    }
    while(detik != detik2)
    {
        d++;
        detik++;
        if(detik == 61)
            detik = 1;
    }
    if(verj == true)
        h--;
    if(verm == true)
        j--;
    if(verd == true)
        m--;

    cout << h <<" dia(s)" <<endl;
    cout << j << " hora(s)" <<endl;
    cout << m << " minuto(s)" <<endl;
    cout << d << " segundo(s)" <<endl;
    return 0;
}
