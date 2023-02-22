#include <iostream>

using namespace std;

const int N = 1010;

int n, m, q;
int a[N][N], S[N][N];

int main()
{
    scanf("%d %d %d", &n, &m, &q);
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + a[i][j];//前缀和
        }
    }

    while(q--)
    {   
        int l1, r1, l2, r2;
        scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
        printf("%d\n",S[l2][r2] - S[l1 - 1][r2] - S[l2][r1 -1] + S[l1 - 1][r1 -1]);//子矩阵的和
    }
}


