#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int s,total = 0;
    while(scanf("%d",&s) !=EOF )
    {
        total += s;
    }

    cout << total << endl;
    return 0;
}
