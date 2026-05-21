#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        long long N, M, K;
        cin >> N >> M >> K;

        long long total = 0;
        for (int i = 0; i < N; i++)
        {
            long long x;
            cin >> x;
            total += x;
        }

        long long block = K + 1;
        long long full = M / block;
        long long rem = M % block;

        long long maxFill = full * K + min(K, rem);

        cout << min(total, maxFill) << "\n";
    }

    return 0;
}