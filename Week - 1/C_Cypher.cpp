#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < n; i++) {
            int b;
            string s;
            cin >> b >> s;

            int digit = a[i];

            for (char c : s) {
                if (c == 'U') {
                    digit = (digit - 1 + 10) % 10;
                } else {
                    digit = (digit + 1) % 10;
                }
            }

            cout << digit << " ";
        }
        cout << "\n";
    }

    return 0;
}