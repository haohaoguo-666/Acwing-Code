#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//最长公共字符串后缀

int main() {
    int n;
    while (cin >> n, n) {//循环输入n个字符串，n为0时停止输入
        string s, a;     //s是第一个字符串，a表示后面的字符串，让s分别于s后面的字符串a比较
        int MAX = 210;
        cin >> s;//第一个字符串赋值给s
        for (int i = 1; i < n; i++) {//第1个字符串分别与剩下的n-1个字符串比较
            int res = 0;
            cin >> a;
            for (int len = 1; len <= a.size() && len <= s.size(); len++) {//倒序判断字符是否相等
                if (a[a.size() - 1 - (len - 1)] == s[s.size() - 1 - (len - 1)]) {
                    res++;//res是子串的长度加1
                }
                else {
                    break;
                }
            }
            MAX = min(MAX, res);//得到n-1次比较中满足所有字符串的最长后缀
        }
        if (MAX) {
            cout << s.substr(s.size() - 1 - (MAX - 1)) << endl;//输出后缀
        }
        else {
            cout << endl;
        }
    }
    return 0;
}

