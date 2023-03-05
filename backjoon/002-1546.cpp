#include <iostream>

using namespace std;


int main() {
    int N = 0;
    int score[1000] = {0};

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> score[i];

    long sum = 0;
    long max = 0;

    for (int i = 0; i < N; i++) {
        if (score[i] > max)
            max = score[i];
        sum += score[i];
    }

    double result = sum * 100.0 / N / max;
    cout << result << endl;

    return 0;
}