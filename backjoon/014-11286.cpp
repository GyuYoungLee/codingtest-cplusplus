// 절대값 힙 구현하기 (우선순위큐)

#include <iostream>
#include <queue>

using namespace std;

struct compare {
    bool operator()(int a, int b) {
        int a_abs = abs(a);
        int b_abs = abs(b);
        if (a_abs == b_abs) return a > b;
        else return a_abs > b_abs;
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // compare 정렬 기준
    priority_queue<int, vector<int>, compare> pqu;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int request;
        cin >> request;

        if (request == 0) {
            if (pqu.empty()) {
                cout << "0\n";
            }
            else {
                cout << pqu.top() << "\n";
                pqu.pop();
            }
        } else {
            pqu.push(request);
        }
    }
}
