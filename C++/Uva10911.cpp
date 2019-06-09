#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int N,target;
double dist[20][20], memo[1 << 16];

double matching(int bit_mask)
{
    if(memo[bit_mask] > -0.5)
        return memo[bit_mask];
    if(bit_mask == target)
        return memo[bit_mask] = 0;


    double ans = 2000000000.0;
    double lapet;
    int p1,p2;
    for(p1=0; p1 < 2 * N; p1++)
    {
        if(!(bit_mask & (1 << p1)))
        break;

    }
    for(p2=p1 + 1; p2 < 2 * N; p2++)
        if(!(bit_mask & (1 << p2)))
        { lapet = min(ans,
                      dist[p1][p2] + matching(bit_mask | (1 << p1) | (1 << p2)));
        }
    return memo[bit_mask] = lapet;

}

int main()
{
    int i,j,caseNo = 1 , x[20],y[20];

    while(scanf("%d", &N),N )
    {
        for(i=0; i<2*N; i++)
        {
            scanf("%*s %d %d", &x[i], &y[i]);
        }
        for(i=0; i< 2 * N - 1; i++ )
        {
            for(j=i+1; j < 2 * N; j++)
                dist[i][j] = dist[j][i] = hypot(x[i] - x[j], y[i] - y[j]);

        }

        for(i=0; i<(1 << 16); i++)
            memo[i] = -1.0;
        target = (1 << (2 * N) - 1 );
        printf("Case %d: %.2lf\n", caseNo++, matching(0));
    }

    return 0;
}
