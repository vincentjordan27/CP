#include <stdio.h>
#include <string.h>

int main()
{
    char s[100],sub[100],r[100];
    int coun = 0;
    scanf("%s %s",s,sub);

    for(int i=0; i<strlen(s); i++)
    {
        for(int j=0; j<strlen(sub); j++)
        {
            if((sub[j] == s[i] && sub[j+1] == s[i+1]) )
            {
                coun++;
                continue;

            }
            else if(sub[j] == s[i] && sub[j-1] == s[i-1])
            {
                coun++;
                continue;
            }


        }
        if(coun == 1)
        {
            coun = 0;
            continue;
        }
    printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}
