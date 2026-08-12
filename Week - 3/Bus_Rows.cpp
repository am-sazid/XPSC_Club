#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;

        int row = (x - 1) / m + 1;

        int fFront = row;
        int fBack = n - row + 1;

        cout << min(fFront, fBack) << '\n';
    }

    return 0;
}