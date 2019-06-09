#include <string.h>
#include <stdio.h>


int main()
{
    char s[1000001];

    scanf(" %[^\n]",s);

    char n[1000001];

    scanf(" %[^\n]",n);

    long int a = strlen(s);
    long int b = strlen(n);

    printf("%ld\n", a + b);

    return 0;
}
