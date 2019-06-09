#include<stdio.h>
#include<string.h>

int main()
{
    char s[5];
    gets(s);
    long int hasil = atol(s);
    printf("%d",hasil);


    return 0;
}
