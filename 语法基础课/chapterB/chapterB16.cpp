#define _CRT_SECURE_NO_WARNINGS 1
//Æ½¾ùÊý3
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    double N1, N2, N3, N4;
    cin >> N1 >> N2 >> N3 >> N4;
    double X = (2 * N1 + 3 * N2 + 4 * N3 + N4) / 10;
    cout << "Media: " << X << endl;
    if (X >= 7.0) {
        cout << "Aluno aprovado." << endl;
    }
    else if (X < 5.0) {
        cout << "Aluno reprovado." << endl;
    }
    else {
        cout << "Aluno em exame." << endl;
        double Y;
        cin >> Y;
        cout << "Nota do exame: " << Y << endl;
        double Z = (X + Y) / 2;
        if (Z >= 5.0) {
            cout << "Aluno aprovado." << endl;
        }
        else {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << Z << endl;
    }
}