#include <iostream>

using namespace std;

const int N = 1e6 + 10;
int m, n;
int q[N];

int main()
{
    scanf("%d%d", &m, &n);
    for(int i = 0;i < m;i++) scanf("%d",&q[i]);
    
    while(n--)
    {
        int x;
        scanf("%d", &x);
        
        int l = 0, r = m - 1;
        while(l < r)
        {
            int mid = l + r >> 1;
            if(q[mid] >= x) r = mid;
            else l = mid + 1;
        }
        if(q[l] != x) printf("-1 -1\n");
        else
        {
            printf("%d ", l);
            l = 0, r = m - 1;
            while(l < r)
            {
                int mid = l + r + 1 >> 1;
                if(q[mid] <= x) l = mid;
                else r = mid - 1;
            }
            printf("%d\n", l);
        }
        
    }
}
