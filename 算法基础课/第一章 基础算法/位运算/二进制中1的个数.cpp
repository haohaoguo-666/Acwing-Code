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
        while(x)x -= lowbit(x), res++;//ÿ�μ�ȥx�����һλ1

        cout << res << " ";
    }
}
