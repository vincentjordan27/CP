#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main()
{

    int n,i;
    cin >> n;
    char arr[n];
    char r[n];
    int hit = 0;
    for(i=0; i<n; i++)
    {
        cin >> arr[n];
    }
    if(n % 2 == 1)
    {
        cout << n << endl;
        return 0;
    }
    else
    {
        for(i=0; i<n; i+=2)
        {
            if(arr[i+1] != '\0')
            {
                if(arr[i] != arr[i + 1])
                {
                    r[hit] = arr[i];
                    hit++;
                }

                else
                    continue;
            }
            else
                continue;
        }
        r[hit] = '\0';


        for(i=0; i<hit; i++)
        {
            cout << r[hit];
        }
    }



    return 0;
}
