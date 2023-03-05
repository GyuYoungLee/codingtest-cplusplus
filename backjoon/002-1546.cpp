// 평균 구하기

#include <iostream>

using namespace std;


int main() {
    int N;
    int score[1000];

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

    double result = sum * 100.0 / max / N;
    cout << result << endl;
}
