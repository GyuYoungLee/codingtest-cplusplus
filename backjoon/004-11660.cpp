// 구간 합 구하기 2 (구간합)

#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> S(N + 1, vector<int>(N + 1, 0));

    // 합배열 생성
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int now;
            cin >> now;
            S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + now;
        }
    }

    for (int i = 0; i < M; i++) {
        int X1, Y1, X2, Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;
        int r = S[X2][Y2] - S[X2][Y1 - 1] - S[X1 - 1][Y2] + S[X1 - 1][Y1 - 1];
        cout << r << '\n';
    }
}
