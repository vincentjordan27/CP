#include<stdio.h>
#include<string.h>

int main()
{
    char huruf[5];
    char str[100];
    int n=0,a=0,i=0,j,k;
    int padanan[5];


    scanf("%s",str);
    while(str[i] != '\0')
    {
        n++;
        i++;
    }
    int angka[n];
     scanf("%s",huruf);
     for(i=0; i<5; i++)
    {
        scanf("%d",&padanan[i]);
    }
    for(k=0; k<n; k++)
    {
        for(j=0; j<5; j++)
        {
            if(str[k] == huruf[j])
            {
                int c = padanan[j];
                angka[a] = c;
                a++;
                break;



            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d\n",angka[i]);
    }






    return 0;
}
