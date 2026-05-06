#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int ans = 0;

        for (int i = 0; i < N; i++) {
            if (A[i] % X == 0) {
                ans = max(ans, A[i]);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}