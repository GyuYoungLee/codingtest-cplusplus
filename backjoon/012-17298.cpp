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

    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<int> ans(N, 0);
    stack<pair<int, int>> st;

    // [3 5 2 7] => 오큰수 [5 7 7 -1]
    for (int i = 0; i < N; i++) {
        // 큰 수는 오큰수 처리
        while (!st.empty() && st.top().first < A[i]) {
            int idx = st.top().second;
            ans[idx] = A[i];
            st.pop();
        }

        // 작은 수는 스택에 저장
        st.push(make_pair(A[i], i));
    }

    while (!st.empty()) {
        int idx = st.top().second;
        ans[idx] = -1;
        st.pop();
    }

    for (const int x: ans) cout << x << " ";
}
