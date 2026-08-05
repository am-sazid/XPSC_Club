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
        int x, y, p;
        cin >> x >> y >> p;

        if (x * y >= p)
        {
            cout << 0 << "\n";
            continue;
        }

        int ans = INT_MAX;

        for (int i = 0; i <= 200; i++)
        {
            int nx = x + i;
            int j = 0;

            while (nx * (y + j) < p)
                j++;

            ans = min(ans, i + j);
        }

        cout << ans << "\n";
    }

    return 0;
}