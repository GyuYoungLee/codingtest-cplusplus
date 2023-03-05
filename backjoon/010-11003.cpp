#include <iostream>
#include <deque>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, L;
    deque<pair<int, int>> dq;

    cin >> N >> L;

    for (int i = 0; i < N; i++) {
        int now;
        cin >> now;

        // ���ʿ� ū�� ����
        while (!dq.empty() && dq.back().first > now) dq.pop_back();

        dq.push_back(make_pair(now, i));

        // ���ʿ� �����̵� ��� �� ����
        if (dq.front().second <= i - L) dq.pop_front();

        cout << dq.front().first << ' '; // �ּҰ� ���
    }
}
