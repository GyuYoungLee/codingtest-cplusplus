// DNA 비밀번호 (슬라이딩 윈도우)

#include <iostream>

using namespace std;

int check[4];
int checkCnt = 0;

void addCh(char c);

void removeCh(char c);


int main() {
    int S, P;
    string A;

    cin >> S >> P;
    cin >> A;
    for (int &x: check) {
        cin >> x;
        if (x == 0) checkCnt++;
    }

    int cnt = 0;

    // 첫 윈도우 체크
    for (int i = 0; i < P; i++) {
        addCh(A[i]);
    }
    if (checkCnt == 4) cnt++;

    // 슬라이딩하면서 각 윈도우 체크
    for (int i = P; i < S; i++) {
        addCh(A[i]);
        removeCh(A[i - P]);
        if (checkCnt == 4) cnt++;
    }

    cout << cnt << endl;
}

void addCh(char c) {
    switch (c) {
        case 'A':
            check[0]--;
            if (check[0] == 0) checkCnt++;
            break;
        case 'C':
            check[1]--;
            if (check[1] == 0) checkCnt++;
            break;
        case 'G':
            check[2]--;
            if (check[2] == 0) checkCnt++;
            break;
        case 'T':
            check[3]--;
            if (check[3] == 0) checkCnt++;
            break;
    }
}

void removeCh(char c) {
    switch (c) {
        case 'A':
            if (check[0] == 0) checkCnt--;
            check[0]++;
            break;
        case 'C':
            if (check[1] == 0) checkCnt--;
            check[1]++;
            break;
        case 'G':
            if (check[2] == 0) checkCnt--;
            check[2]++;
            break;
        case 'T':
            if (check[3] == 0) checkCnt--;
            check[3]++;
            break;
    }
}