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
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a)
            cin >> x;

        sort(a.begin(), a.end());

        long long ans = 0;
        long long prevVal = -1;
        long long prevCnt = 0;

        for (int i = 0; i < n;)
        {
            int j = i;
            while (j < n && a[j] == a[i])
                j++;

            long long val = a[i];
            long long cnt = j - i;

            if (val != prevVal + 1)
            {
                ans += cnt; 
            }
            else
            {
                ans += max(0LL, cnt - prevCnt);
            }

            prevVal = val;
            prevCnt = cnt;
            i = j;
        }

        cout << ans << '\n';
    }
    return 0;
}