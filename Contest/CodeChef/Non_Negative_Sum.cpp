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

        sort(a.begin(), a.end(), greater<int>());

        int cnt = 0;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += a[i];

            if (sum >= 0)
            {
                cnt++;
            }
        }

        cout << cnt<<endl;
    }

    return 0;
}