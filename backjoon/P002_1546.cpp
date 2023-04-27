// 평균 구하기

#include <iostream>

using namespace std;


int main() {
    int N;
    cin >> N;

    int sum = 0;
    int max = 0;

    for (int i = 0; i < N; i++) {
        int now;
        cin >> now;
        sum += now;
        if (now > max) max = now;
    }

    double result = sum * 100.0 / max / N;
    cout << result << endl;
}

/*
3
40 80 60
*/