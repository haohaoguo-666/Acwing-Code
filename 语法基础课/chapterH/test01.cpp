#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Rec
{
	int x, y;

	bool operator < (const Rec& t)  const
	{
		return x < t.x;
	}
}a[5];

int main() {
	
	for (int i = 0; i < 5; i++) {
		a[i].x = i;
		a[i].y = -i;
	}

	for (int i = 0; i < 5; i++) 
		printf("(%d, %d) ", a[i].x, a[i].y);
		cout << endl;

	sort(a, a + 5);

	for (int i = 0; i < 5; i++) 
		printf("(%d, %d) ", a[i].x, a[i].y);
		cout << endl;
	

	

}