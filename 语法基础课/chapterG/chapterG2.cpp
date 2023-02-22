#define _CRT_SECURE_NO_WARNINGS 1
//Ìæ»»¿Õ¸ñ
#include <string>

class Solution {
    string stra;
public:
    string replaceSpaces(string& str) {
        int i = 0;
        for (i = 0; i < str.size(); i++) {
            if (str[i] != ' ') {
                stra += str[i];
            }
            else {
                stra += "%20";
            }
        }
        return stra;
    }
};