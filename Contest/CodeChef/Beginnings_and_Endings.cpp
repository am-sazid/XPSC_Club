#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        // Already good
        if (A[0] == A[N - 1])
        {
            cout << 0 << '\n';
            continue;
        }

        int ans = 1e9;

        // Try every pair of equal elements
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (A[i] == A[j])
                {
                    int cost = i + (N - 1 - j);
                    ans = min(ans, cost);
                }
            }
        }

        if (ans == 1e9)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }

    return 0;
}