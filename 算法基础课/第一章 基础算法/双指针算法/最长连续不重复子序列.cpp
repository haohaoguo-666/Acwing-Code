#include <iostream>

using namespace std;

const int N = 10e5 + 10;

int a[N], S[N];


int main()
{
    int n, res = 0;
    cin >> n;
    for(int i= 0;i < n;i++)
        cin >> a[i];

    for(int i = 0, j = 0;i < n;i++)
    {
        S[a[i]]++;
        while(S[a[i]] > 1)
        {
            S[a[j]]--;
            j++;
        }
        res = max(res, i - j + 1);

    }
    printf("%d",res);
}

