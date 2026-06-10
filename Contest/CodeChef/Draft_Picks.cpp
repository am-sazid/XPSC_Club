#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> strength(n + 1, 0);

        int card = k;
        bool forward = true;

        while (card > 0)
        {
            if (forward)
            {
                for (int i = 1; i <= n && card > 0; i++)
                {
                    strength[i] += card;
                    card--;
                }
            }
            else
            {
                for (int i = n; i >= 1 && card > 0; i--)
                {
                    strength[i] += card;
                    card--;
                }
            }
            forward = !forward;
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans = max(ans, strength[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}