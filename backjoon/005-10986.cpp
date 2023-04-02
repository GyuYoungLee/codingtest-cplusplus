// 나머지 합 구하기 (구간합)

#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<long> S(N + 1, 0);
    vector<long> C(M, 0);

    // 합배열 생성
    for (int i = 1; i <= N; i++) {
        int now;
        cin >> now;
        S[i] = S[i - 1] + now;
    }

    // 변형된 합배열 생성
    for (int i = 0; i <= N; i++) {
        int remain = S[i] % M;
        C[remain]++;
    }

    // 계산
    long cnt = 0;
    for (int i = 0; i < M; i++) {
        cnt += C[i] * (C[i] - 1) / 2;
    }
    cout << cnt << endl;
}
