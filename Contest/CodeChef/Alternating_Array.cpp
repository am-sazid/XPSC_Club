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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < n; i++)
        {

            if (i % 2 == 0)
            {
                if (a[i] % 2 == 0)
                    cnt1++;

                if (a[i] % 2 == 1)
                    cnt2++;
            }
            else
            {
                if (a[i] % 2 == 1)
                    cnt1++;

                if (a[i] % 2 == 0)
                    cnt2++;
            }
        }

        cout << min(cnt1, cnt2) << "\n";
    }

    return 0;
}