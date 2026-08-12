#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool can(vector<ll> &a, ll K, ll M)
{
    ll total = 0;
    ll prev = -1;

    for (ll x : a)
    {
        ll cur = max(x, prev + 1);

        if (cur - x > M)
            return false;

        total += cur - x;

        if (total > M * K)
            return false;

        prev = cur;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        ll K;
        cin >> N >> K;

        vector<ll> A(N);

        for (auto &x : A)
            cin >> x;

        sort(A.begin(), A.end());

        if (can(A, K, 0))
        {
            cout << 0 << '\n';
            continue;
        }

        ll lo = 0;
        ll hi = 1LL * N * (N - 1) / 2;

        while (lo < hi)
        {
            ll mid = lo + (hi - lo) / 2;

            if (can(A, K, mid))
                hi = mid;
            else
                lo = mid + 1;
        }

        cout << lo << '\n';
    }

    return 0;
}