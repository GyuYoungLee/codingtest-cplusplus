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

    vector<long> A(N + 1, 0);
    vector<long> S(N + 1, 0);
    vector<long> C(M, 0);

    // 합배열 만들기
    for (int i = 1; i < N + 1; i++) {
        cin >> A[i];
        S[i] = S[i - 1] + A[i];
    }

    for (int i = 0; i < N + 1; i++) {
        int remainder = S[i] % M;
        C[remainder]++;
    }

    long answer = 0;
    for (int i = 0; i < M; i++) {
        answer += C[i] * (C[i] - 1) / 2;
    }
    cout << answer << "\n";
}
