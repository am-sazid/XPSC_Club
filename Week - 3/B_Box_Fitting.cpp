#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, b;
        cin >> n >> b;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.rbegin(), a.rend());

        multiset<int> emptySpaces;
        int ans = 0;

        for (int val : a)
        {
            auto it = emptySpaces.lower_bound(val);

            if (it == emptySpaces.end())
            {
                ans++;
                emptySpaces.insert(b - val);
            }
            else
            {
                int space = *it;
                emptySpaces.erase(it);
                emptySpaces.insert(space - val);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}