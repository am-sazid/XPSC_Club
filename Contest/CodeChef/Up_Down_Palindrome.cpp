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
        cin >> n;

        vector<long long int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long int l = 0;
        long long int r = 1e18;
        bool flg = true;

        for (int i = 0; i < n / 2; i++)
        {
            long long int x = a[i];
            long long int y = a[n - 1 - i];

            if (x == y)
                continue;

            if (abs(x - y) != 2)
            {
                flg = false;
                break;
            }

            long long int mn = min(x, y);
            long long int mx = max(x, y);

            l = max(l, mn);
            r = min(r, mx - 1);
        }

        if (flg && l <= r)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}