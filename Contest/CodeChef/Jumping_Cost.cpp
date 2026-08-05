#include <bits/stdc++.h>
using namespace std;

int main()
{

    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        vector<long long> dp(n + 1);

        dp[1] = 0;
        long long best = dp[1] + 1; // max(dp[i] + i)
        long long ans = 0;

        for (int j = 2; j <= n; j++)
        {
            dp[j] = a[j] - j + best;
            best = max(best, dp[j] + j);
            ans = max(ans, dp[j]);
        }

        cout << ans << endl;
    }

    return 0;
}