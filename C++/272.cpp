#include<iostream>
#include<cstdio>
#include<stdio.h>


using namespace std;

int main()
{
    char c;
    int cnt=0;
    while(scanf("%c",&c) == 1)
    {
        if( c == '"')
        {
            cnt++;
            if((cnt % 2) == 1)
                printf("``");
            else if((cnt % 2) == 0)
                printf("''");
        }
        else
            printf("%c",c);
    }


    return 0;
}
