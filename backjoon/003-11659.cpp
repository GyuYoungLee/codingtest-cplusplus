// 구간 합 구하기 (구간합)

#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> S(N + 1, 0);

    // 합배열 생성
    for (int i = 1; i <= N; i++) {
        int now;
        cin >> now;
        S[i] = S[i - 1] + now;
    }

    for (int i = 0; i < M; i++) {
        int st, en;
        cin >> st >> en;
        cout << S[en] - S[st - 1] << '\n';
    }
}
