#include<iostream>

using namespace std;

int main()
{
    int jumlah=0,n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int satu = 0;
        for(int j=0; j<3; j++)
        {
            int a;
            cin >> a;
            if(a == 1)
                {
                    satu += 1;
                }

        }
        if(satu >= 2)
            jumlah++;
    }
    cout << jumlah << endl;

    return 0;
}
