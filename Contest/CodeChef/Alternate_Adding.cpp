#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> b(n);

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            if (i % 2 == 0)
                b[i] = x;
            else
                b[i] = -x;
        }

        long long total = 0;

        total += abs(b[0]);

        for (int i = 1; i < n; i++) {
            total += abs(b[i] - b[i - 1]);
        }

        total += abs(b[n - 1]);

        cout << total / 2 << '\n';
    }

    return 0;
}