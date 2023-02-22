#define _CRT_SECURE_NO_WARNINGS 1
//ศýิชื้ลละ๒ 
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

struct Rec {
    int x;
    double y;
    string str;
    bool operator < (const Rec& t)  const
    {
        return x < t.x;
    }
};

int main() {
    int n, a;
    double b;
    string s;
    cin >> n;
    vector<Rec> array;
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> s;
        array.push_back({ a, b, s });
    }
    sort(array.begin(), array.end());


    for (i = 0; i < n; i++) {
        printf("%d %.2lf %s\n", array[i].x, array[i].y, &(array[i].str[0]));
    }

}
