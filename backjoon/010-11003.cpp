// 최솟값 찾기 (슬라이딩 윈도우)

#include <iostream>
#include <deque>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, L;
    cin >> N >> L;

    deque<pair<int, int>> dq;

    // 슬라이딩
    for (int i = 0; i < N; i++) {
        int now;
        cin >> now;

        // 뒤쪽에 새로운 값 추가
        while (!dq.empty() && dq.back().first > now) dq.pop_back();

        dq.push_back(make_pair(now, i));

        // 앞쪽에 기존 값 제거
        if (dq.front().second <= i - L) dq.pop_front();

        cout << dq.front().first << ' '; // 최소값 출력
    }
}
