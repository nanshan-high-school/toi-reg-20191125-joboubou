#include <iostream>
using namespace std;

int num(int b[], int c);

int main() {
    float M, A, N, E;
    int days[7] = {0};
    int times[4] = {0};

    for (int i = 0; i < 7; i++) {
        cin >> M;
        times[0] += M;
        cin >> A;
        times[1] += A;      
        cin >> N;
        times[2] += N;
        cin >> E;
        times[3] += E;

        days[i] += M + A + N + E;        
    }

    cout << "\n" << num(days, 7) << "\n";

    if (num(times, 4) == 1) {
        cout << "morning";
    } else if (num(times, 4) == 2) {
        cout << "afternoon";
    } else if (num(times, 4) == 3) {
        cout << "night";
    } else if (num(times, 4) == 4) {
        cout << "early morning";
    }
}

int num(int b[], int c) {
    int a[c];
    for (int i = 0; i < c; i++) {
        a[i] = b[i];
    }

    for (int i = 0; i < c; i++) {
        for (int j = i + 1; j < c; j++) {
            if (a[i] < a[j]) {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < c; i++) {
        if (a[0] == b[i]) {
            int num = i + 1;
            return num;
        }
    }

    return 0;
}
