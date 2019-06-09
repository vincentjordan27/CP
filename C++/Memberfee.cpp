#include <bits/stdc++.h>

using namespace std;

int main()
{
    const double fee = 0.04;
    const int year = 6;
    double membership = 2500;
    int i;

    for(i=0; i<year; i++)
    {
        membership += membership * fee;
        cout << "The fee in year " << i+1 << " is " << membership << "\n";
    }


    return 0;
}
