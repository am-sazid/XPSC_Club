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

        int C[n];
        for (int i = 0; i < n; i++)
        {
            cin >> C[i];
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans = max(ans, C[i]);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (C[i] <= C[j])
                {
                    ans = max(ans, C[i] + C[j]);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}