// 오큰수 구하기 (스택)

#include <iostream>
#include <vector>
#include <stack>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    stack<pair<int, int>> st;
    vector<int> result(N, 0);

    for (int i = 0; i < N; i++) {
        int now;
        cin >> now;

        // now가 큰 수라면 오큰수로 저장
        while (!st.empty() && st.top().first < now) {
            int idx = st.top().second;
            result[idx] = now;
            st.pop();
        }

        st.emplace(now, i);
    }

    while (!st.empty()) {
        int idx = st.top().second;
        result[idx] = -1;
        st.pop();
    }

    for (int x: result) cout << x << " ";
}

/*
4
3 5 2 7
*/