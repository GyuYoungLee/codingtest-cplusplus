// 스택으로 새로운 수 만들기 (스택)

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

    stack<int> st;
    int num = 1;
    string answer;

    for (int i = 0; i < N; i++) {
        while (num <= A[i]) {
            answer += "+\n";
            st.push(num++);
        }

        if (st.top() == A[i]) {
            answer += "-\n";
            st.pop();
        } else {
            answer = "NO";
            break;
        }
    }

    cout << answer << endl;
}
