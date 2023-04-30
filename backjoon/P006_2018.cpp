// 연속된 자연수의 합 구하기 (투포인터)

#include <iostream>

using namespace std;


int main() {
    int N;
    cin >> N;

    int i = 1;
    int j = 1;
    int sum = 1;
    int cnt = 0;

    // 투 포인터
    while (j <= N) {
        if (sum < N) {
            j++;
            sum += j;
        } else if (sum > N) {
            sum -= i;
            i++;
        } else {
            cnt++;

            j++;
            sum += j;
            sum -= i;
            i++;
        }
    }

    cout << cnt << endl;
}

/*
15
*/