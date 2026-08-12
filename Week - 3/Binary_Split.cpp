#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int N;
        string S;
        cin >> N >> S;

        string ans = S;

        for (int i = 0; i < N; ) {
            int j = i;

            while (j < N && S[j] == S[i])
                j++;

            if (S[i] == '0' && j < N && S[j] == '1') {
                int k = j;

                while (k < N && S[k] == '1')
                    k++;

                string candidate = S.substr(i, k - i);

                if (candidate < ans)
                    ans = candidate;
            }

            i = j;
        }

        cout << ans << '\n';
    }

    return 0;
}