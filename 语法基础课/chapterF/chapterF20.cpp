#define _CRT_SECURE_NO_WARNINGS 1
//排列
#include<iostream>
#include<cstring>
using namespace std;

const int N = 10;//根据题目，最大数字是9
int q[N];//存储的是遍历到的数字
bool st[N];//判断数字是否被遍历
int n;//这里n一定要定义再全局变量里面，因为下面这个函数需要使用

//深度优先搜索遍历
void dfs(int u)
{
    //当遍历到最后一层的时候,先输出，再退出
    if (u == n)
    {
        for (int i = 0; i < n; i++) cout << q[i] << " ";
        cout << endl;
        return;//退出函数
    }

    for (int i = 1; i <= n; i++)//按字典序遍历数字
        if (!st[i])//当这个数字不存在于q[]数组中,可以进入，否则继续遍历
        {
            q[u] = i;//存入数字
            st[i] = true;//先将数字进行标记
            dfs(u + 1);//进入下一层
            st[i] = false;//当从下一层出来的时候，这个数字也不再被标记
        }
}

int main()
{
    cin >> n;

    dfs(0);

    return 0;
}

