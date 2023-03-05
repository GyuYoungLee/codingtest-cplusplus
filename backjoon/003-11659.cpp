// 구간 합 구하기 (구간합)

#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    int S[100001] = {0};
    int temp;

    // 합배열 만들기
    for (int i = 1; i <= N; i++) {
        cin >> temp;
        S[i] = S[i - 1] + temp;
    }

    for (int i = 0; i < M; i++) {
        int start, end;
        cin >> start >> end;
        cout << S[end] - S[start - 1] << "\n";
    }
}
