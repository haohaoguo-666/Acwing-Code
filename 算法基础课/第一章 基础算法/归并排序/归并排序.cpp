#include <iostream>

using namespace std;

const int N = 1e6 + 10;
int n = 0;
int q[N], tmp[N];

void merge_sort(int q[],int l,int r)
{
    if(l >= r)return;
    
    int mid = l + r >> 1;
    
    merge_sort(q, l , mid);
    merge_sort(q, mid + 1, r); 
    
    int k = 0, i = l, j = mid + 1;
    //k��res����Ĳ���λ�ã�i��left���ֵ���ʼλ�ã�l��right���ֵ���ʼλ��
    
    while(i <= mid && j <= r)
    if(q[i] <= q[j])tmp[k++] = q[i++];
    //left<=right left���ֲ���
    else tmp[k++] = q[j++];
    //left>right right���ֲ���
    
    while(i <= mid) tmp[k++] = q[i++];
    while(j <= r) tmp[k++] = q[j++];
    //left��right����ʣ�඼����
    
    for(i = l,j = 0;i <= r;i++,j++)q[i] = tmp[j];
    //res�����滻ԭ������
}

int main()
{
    scanf("%d",&n);
    
    
    for(int i = 0;i < n;i++)scanf("%d ",&q[i]);
    
    merge_sort(q,0,n-1);
    
    for(int i = 0;i < n;i++)printf("%d ",q[i]);
    
    return 0;
    
}
