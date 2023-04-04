// 좋은 수 구하기 (투포인터)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int N;
    cin >> N;

    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) cin >> A[i];

    sort(A.begin(), A.end());
    int cnt = 0;

    for (int k = 0; k < N; k++) {
        int target = A[k];
        int i = 0;
        int j = N - 1;

        // 투 포인터
        while (i < j) {
            if (A[i] + A[j] > target) {
                j--;
            } else if (A[i] + A[j] < target) {
                i++;
            } else {
                if (j == k) {
                    j--;
                } else if (i == k) {
                    i++;
                } else {
                    cnt++;
                    break;
                }
            }
        }
    }

    cout << cnt << endl;
}

/*
10
1 2 3 4 5 6 7 8 9 10
*/