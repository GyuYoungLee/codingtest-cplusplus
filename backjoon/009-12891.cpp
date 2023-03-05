#include <iostream>

using namespace std;

int checkArr[4] = {0};
int myArr[4] = {0};
int checkSecret = 0;

void myAdd(char c);
void myRemove(char c);


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int S, P;
    string A;
    int count = 0;

    cin >> S >> P;
    cin >> A;
    for (int &x: checkArr) cin >> x;

    // checkSecret �ʱ�ȭ
    for (int x: checkArr)
        if (x == 0) checkSecret++;

    // myArr �ʱ�ȭ
    for (int i = 0; i < P; i++) myAdd(A[i]);
    if (checkSecret == 4) count++;

    // �����̵�
    for (int i = P; i < S; i++) {
        myAdd(A[i]);
        myRemove(A[i - P]);

        if (checkSecret == 4) count++;
    }

    cout << count << endl;
}

void myAdd(char c) {
    switch (c) {
        case 'A':
            myArr[0]++;
            if (myArr[0] == checkArr[0]) checkSecret++;
            break;
        case 'C':
            myArr[1]++;
            if (myArr[1] == checkArr[1]) checkSecret++;
            break;
        case 'G':
            myArr[2]++;
            if (myArr[2] == checkArr[2]) checkSecret++;
            break;
        case 'T':
            myArr[3]++;
            if (myArr[3] == checkArr[3]) checkSecret++;
            break;
    }
}

void myRemove(char c) {
    switch (c) {
        case 'A':
            myArr[0]--;
            if (myArr[0] == (checkArr[0] - 1)) checkSecret--;
            break;
        case 'C':
            myArr[1]--;
            if (myArr[1] == (checkArr[1] - 1)) checkSecret--;
            break;
        case 'G':
            myArr[2]--;
            if (myArr[2] == (checkArr[2] - 1)) checkSecret--;
            break;
        case 'T':
            myArr[3]--;
            if (myArr[3] == (checkArr[3] - 1)) checkSecret--;
            break;
    }
}