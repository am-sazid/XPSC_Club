#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        int sum = 0;
        int odd = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            sum += x;

            if (x % 2 == 1)
                odd++;
        }

        if (sum % 2 == 1) {
            cout << odd / 2 << '\n';
        } else {
            cout << sum - odd / 2 << '\n';
        }
    }

    return 0;
}