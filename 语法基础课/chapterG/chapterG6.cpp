#define _CRT_SECURE_NO_WARNINGS 1
//×óÐý×ª×Ö·û´®
class Solution {
public:
    string leftRotateString(string str, int n) {
        int i = n;
        string stra = "";
        for (i = n; i < str.size(); i++) {
            stra += str[i];
        }
        for (i = 0; i < n; i++) {
            stra += str[i];
        }
        return stra;
    }
};