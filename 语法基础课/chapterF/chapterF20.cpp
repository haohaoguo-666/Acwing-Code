#define _CRT_SECURE_NO_WARNINGS 1
//����
#include<iostream>
#include<cstring>
using namespace std;

const int N = 10;//������Ŀ�����������9
int q[N];//�洢���Ǳ�����������
bool st[N];//�ж������Ƿ񱻱���
int n;//����nһ��Ҫ������ȫ�ֱ������棬��Ϊ�������������Ҫʹ��

//���������������
void dfs(int u)
{
    //�����������һ���ʱ��,����������˳�
    if (u == n)
    {
        for (int i = 0; i < n; i++) cout << q[i] << " ";
        cout << endl;
        return;//�˳�����
    }

    for (int i = 1; i <= n; i++)//���ֵ����������
        if (!st[i])//��������ֲ�������q[]������,���Խ��룬�����������
        {
            q[u] = i;//��������
            st[i] = true;//�Ƚ����ֽ��б��
            dfs(u + 1);//������һ��
            st[i] = false;//������һ�������ʱ���������Ҳ���ٱ����
        }
}

int main()
{
    cin >> n;

    dfs(0);

    return 0;
}

