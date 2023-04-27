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

    // 첫 윈도우 체크
    for (int i = 0; i < L; i++) {
        int now;
        cin >> now;

        while(!dq.empty() && dq.back().first > now) dq.pop_back();
        dq.emplace_back(now, i);

        cout << dq.front().first << ' ';
    }

    // 슬라이딩하면서 각 윈도우 체크
    for (int i = L; i < N; i++) {
        int now;
        cin >> now;

        // 뒤쪽에 새로운 값 추가
        while(!dq.empty() && dq.back().first >= now) dq.pop_back();
        dq.emplace_back(now, i);

        // 앞쪽에 기존 값 제거
        if (dq.front().second <= i - L) dq.pop_front();

        cout << dq.front().first << " ";
    }
}

/*
12 3
1 5 2 3 6 2 3 7 3 5 2 6
*/