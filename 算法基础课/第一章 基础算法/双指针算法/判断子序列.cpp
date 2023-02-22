#include <iostream>

using namespace std;

const int N = 1e5 + 10;
int a[N], b[N];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int res = 0;
    for(int i = 0;i < n;i++)scanf("%d", &a[i]);
    for(int j = 0;j < m;j++)scanf("%d", &b[j]);
    for(int j = 0, i = 0;j < m;j++)
    {
        if(b[j] == a[i] && i < n)
        {
            i++;
            res++;
        }
    }
    if(res == n)printf("Yes");
    else printf("No");
}


