#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int N = 300010; //n�β����m�β�ѯ������������Ͻ�
int n, m;
int a[N];//�洢��������ֵ
int s[N];//�洢����a��ǰ׺��
vector<int> alls;  //�洢�����������Ͳ�ѯ�йصģ�����
vector<pair<int, int>> add, query; //�洢�����ѯ�ʲ���������

int find(int x) { //���ص���������������ɢ���±�
    int l = 0, r = alls.size() - 1;
    while (l < r) {
        int mid = l + r >> 1;
        if (alls[mid] >= x) r = mid;
        else l = mid + 1;
    }
    return r + 1;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        int x, c;
        scanf("%d%d", &x, &c);
        add.push_back({x, c});
        alls.push_back(x);
    }
    for (int i = 1; i <= m; i++) {
        int l , r;
        scanf("%d%d", &l, &r);
        query.push_back({l, r});
        alls.push_back(l);
        alls.push_back(r);
    }
   //����ȥ��
    sort(alls.begin(), alls.end());
    alls.erase(unique(alls.begin(), alls.end()), alls.end());
    //ִ��ǰn�β������
    for (auto item : add) {
        int x = find(item.first);
        a[x] += item.second;
    }
    //ǰ׺��
    for (int i = 1; i <= alls.size(); i++) s[i] = s[i-1] + a[i];
    //�����m��ѯ�ʲ���
    for (auto item : query) {
        int l = find(item.first);
        int r = find(item.second);
        printf("%d\n", s[r] - s[l-1]);
    }

    return 0;
}


