#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll MOD = 998244353;
const int MAXN = 105;

ll pw2[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pw2[0] = 1;
    for (int i = 1; i < MAXN; i++)
    {
        pw2[i] = (pw2[i - 1] * 2) % MOD;
    }

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> cnt(n + 2, 0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }

        ll ans = 0;

        ll pref = 1;

        if (cnt[0] == 0)
        {
            ans = (pw2[cnt[1]] - 1 + MOD) % MOD;
        }

        for (int x = 1; x <= n; x++)
        {

            if (cnt[x] > 0)
                break;

            if (x == 1)
            {
                pref = (pw2[cnt[0]] - 1 + MOD) % MOD;
            }
            else
            {
                pref = pref * (pw2[cnt[x - 1]] - 1 + MOD) % MOD;
            }

            ans += pref;
            ans %= MOD;

            if (x + 1 <= n)
            {
                ll chooseMax = (pw2[cnt[x + 1]] - 1 + MOD) % MOD;

                ans += pref * chooseMax % MOD;
                ans %= MOD;
            }
        }

        cout << ans % MOD << '\n';
    }

    return 0;
}