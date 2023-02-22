#include <iostream>

using namespace std;

int lowbit(int x)
{
    return x & -x;
}

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int x;
        scanf("%d", &x);
        int res = 0;
        while(x)x -= lowbit(x), res++;//每次减去x的最后一位1

        cout << res << " ";
    }
}
