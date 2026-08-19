#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        long long sum = 0;
        long long mx = 0;
        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            long long x;
            cin >> x;

            sum += x;
            mx = max(mx, x);

            if (sum - mx <= k)
            {
                ans = i;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}