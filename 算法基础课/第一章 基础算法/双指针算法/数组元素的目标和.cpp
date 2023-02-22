#include  <iostream>

using namespace std;

const int N = 1e5 + 10;

int a[N], b[N];
int main()
{
    int n, m;
    unsigned long x;
    scanf("%d %d %ld", &n, &m, &x);
    for(int i = 0;i < n;i ++) scanf("%d", &a[i]);
    for(int j = 0;j < m;j ++) scanf("%d", &b[j]);
    for(int i = n - 1, j = 0;i >= 0;i --)
    {
        while(j < m && a[i] + b[j] < x)j++;

        if(a[i] + b[j] == x)
        {
            printf("%d %d\n", i, j);
            break;
        }

    }


}


