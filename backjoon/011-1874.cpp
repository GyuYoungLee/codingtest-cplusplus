// 스택으로 수열 만들기 (스택)

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

    stack<int> st;
    int num = 1;
    string answer;

    for (int i = 0; i < N; i++) {
        int now;
        cin >> now;

        while (num <= now) {
            answer += "+\n";
            st.push(num++);
        }

        if (!st.empty() && st.top() == now) {
            answer += "-\n";
            st.pop();
        } else {
            answer = "NO";
            break;
        }
    }

    cout << answer << endl;
}

/*
8
4
3
6
8
7
5
2
1
*/