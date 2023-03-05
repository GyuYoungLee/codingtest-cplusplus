// 주몽의 명령 (투포인터)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) cin >> A[i];
    sort(A.begin(), A.end());

    int start = 0;
    int end = N - 1;
    int count = 0;

    // 투 포인터 알고리즘
    while (start < end) {
        if (A[start] + A[end] > M) {
            end--;
        } else if (A[start] + A[end] < M) {
            start++;
        } else {
            count++;
            start++;
            end--;
        }
    }

    cout << count << endl;
}
