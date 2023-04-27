// 합 구하기

#include <iostream>

using namespace std;


int main() {
    int N;
    string number;

    cin >> N;
    cin >> number;

    int sum = 0;
    for (char n: number) {
        sum += n - '0';
    }

    cout << sum << endl;
}

/*
5
54321
*/