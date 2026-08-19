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

        vector<int> a(2 * n);

        for (int &x : a)
            cin >> x;

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans += max(a[i], a[2 * n - 1 - i]);
        }

        cout << ans << '\n';
    }

    return 0;
}