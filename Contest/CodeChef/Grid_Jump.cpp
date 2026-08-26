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
        int a, b, p, q, r;
        cin >> a >> b >> p >> q >> r;

        int ans = INT_MAX;

        for (int i = 0; i <= min(a, b); i++)
        {
            int right = a - i;
            int up = b - i;

            int cost = i * r;

            cost += ((right + 1) / 2) * p;
            cost += ((up + 1) / 2) * q;

            ans = min(ans, cost);
        }

        cout << ans << endl;
    }

    return 0;
}