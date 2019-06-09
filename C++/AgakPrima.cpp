#include <stdio.h>

int T, ans = 0, inp;

int main()
{
        scanf("%d", &inp);
        if (inp < 1)
            printf("BUKAN\n");
        else
            for (int a = 1; a <= inp; a++) {
                if (inp % a == 0)
                    ans++;
                if (ans > 4)
                    printf("BUKAN\n"), a = inp + 1;
                else if (ans < 5 && a == inp)
                    printf("YA\n");
            }
        ans = 0;

}
