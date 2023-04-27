// 주몽의 명령 (투포인터)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int N, M;
    cin >> N;
    cin >> M;

    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) cin >> A[i];

    sort(A.begin(), A.end());

    int i = 0;
    int j = N - 1;
    int cnt = 0;

    // 투 포인터
    while (i < j) {
        if (A[i] + A[j] > M) {
            j--;
        } else if (A[i] + A[j] < M) {
            i++;
        } else {
            j--;
            i++;
            cnt++;
        }
    }

    cout << cnt << endl;
}

/*
6
9
2 7 4 1 5 3
*/