#define _CRT_SECURE_NO_WARNINGS 1
//��Ʊ��Ӳ��
#include <cstdio>

using namespace std;

int main() {

    double money1;
    //�����ܽ��
    scanf("%lf", &money1);
    //�ܽ��*100 ��С��ת�����������������
    int money2 = (int)(money1 * 100);
    //�����ֳ�Ʊ��Ӳ�ҵĶ��*100
    int note[] = { 10000,5000,2000,1000,500,200,100,50,25,10,5,1 };
    printf("NOTAS:\n");
    int i;
    for (i = 0; i < 12; i++) {
        if (i < 6) {
            //�ܽ�����ɻ����ٸ��ֳ�Ʊ
            printf("%d nota(s) de R$ %.2lf\n", money2 / note[i], (double)note[i] / 100);
            //�ܽ�����
            money2 %= note[i];
        }
        if (i == 5) {
            printf("MOEDAS:\n");
        }
        if (i >= 6) {
            //�ܽ�����ɻ����ٸ���Ӳ��
            printf("%d moeda(s) de R$ %.2lf\n", money2 / note[i], (double)note[i] / 100);
            //�ܽ�����
            money2 %= note[i];
        }
    }




}