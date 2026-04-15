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
        int n, m;
        cin >> n >> m;
        int sum = 0;
        for (int i = n; i > m; i--)
        {
            sum += i;
        }
        cout << sum << endl;
    }

    return 0;
}