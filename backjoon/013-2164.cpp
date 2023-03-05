// 카드 게임 (큐)

#include <iostream>
#include <queue>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    queue<int> qu;
    for (int i = 1; i < N + 1; i++) qu.push(i);

    while (qu.size() > 1) {
        qu.pop();
        qu.push(qu.front());
        qu.pop();
    }

    cout << qu.front() << endl;
}
