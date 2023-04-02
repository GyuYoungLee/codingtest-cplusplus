// 절대값 힙 구현하기 (우선순위큐)

#include <iostream>
#include <queue>

using namespace std;

struct Compare {
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

    priority_queue<int, vector<int>, Compare> pqu;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int op;
        cin >> op;

        if (op == 0) {
            // 꺼내기
            if (!pqu.empty()) {
                cout << pqu.top() << '\n';
                pqu.pop();
            } else {
                cout << "0\n";
            }
        } else {
            // 넣기
            pqu.push(op);
        }
    }
}
