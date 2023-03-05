// 좋은 수 구하기 (투포인터)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) cin >> A[i];
    sort(A.begin(), A.end());

    // -5 0 1 2 3 =>  -5 + 3 = 2 (good), 0 + 1 = 1 (X)
    int count = 0;

    for (int k = 0; k < N; k++) {
        int i = 0;
        int j = N - 1;
        int target = A[k];

        // 투 포인터 알고리즘
        while (i < j) {
            if (A[i] + A[j] > target) {
                j--;
            } else if (A[i] + A[j] < target) {
                i++;
            } else {
                if (i == k) {
                    i++;
                } else if (j == k) {
                    j--;
                } else {
                    count++;
                    break;
                }
            }
        }
    }

    cout << count << "\n";
}
