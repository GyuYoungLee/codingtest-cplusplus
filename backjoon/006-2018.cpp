#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    int start = 1;
    int end = 1;
    int sum = 1;
    int count = 1;

    while (end != N) {
        if (sum < N) {
            end++;
            sum += end;
        } else if (sum > N) {
            sum -= start;
            start++;
        } else {
            end++;
            sum += end;
            sum -= start;
            start++;
            count++;
        }
    }
    cout << count << "\n";
}