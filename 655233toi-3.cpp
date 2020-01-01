#include <iostream>
using namespace std;

int main() {
    int n, h, m;
    int time[20] = {0};
    cin >> n;
    cin >> h;
    cin >> m;      

    for (int i = 0; i < n; i++) {
        cin >> time[i];     
    }

    int j;
    do {
        cin >> j;

        if (j == 0) {
            break;
        }

        int k = m;
        for (int i = 0; i < j; i++) {
            k += time[i];
        }
        
        int l = 0;
        while (k >= 60) {
            k -= 60;
            l++;
        }

        if (h + l - 10 < 0) {
            cout << "0";
        }

        cout << h + l << ":";

        if (k - 10 < 0) {
            cout << "0";
        }

        cout << k << "\n";

    } while(j != 0);
}
