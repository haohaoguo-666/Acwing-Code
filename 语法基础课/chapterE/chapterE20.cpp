#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//������ַ�����׺

int main() {
    int n;
    while (cin >> n, n) {//ѭ������n���ַ�����nΪ0ʱֹͣ����
        string s, a;     //s�ǵ�һ���ַ�����a��ʾ������ַ�������s�ֱ���s������ַ���a�Ƚ�
        int MAX = 210;
        cin >> s;//��һ���ַ�����ֵ��s
        for (int i = 1; i < n; i++) {//��1���ַ����ֱ���ʣ�µ�n-1���ַ����Ƚ�
            int res = 0;
            cin >> a;
            for (int len = 1; len <= a.size() && len <= s.size(); len++) {//�����ж��ַ��Ƿ����
                if (a[a.size() - 1 - (len - 1)] == s[s.size() - 1 - (len - 1)]) {
                    res++;//res���Ӵ��ĳ��ȼ�1
                }
                else {
                    break;
                }
            }
            MAX = min(MAX, res);//�õ�n-1�αȽ������������ַ��������׺
        }
        if (MAX) {
            cout << s.substr(s.size() - 1 - (MAX - 1)) << endl;//�����׺
        }
        else {
            cout << endl;
        }
    }
    return 0;
}

