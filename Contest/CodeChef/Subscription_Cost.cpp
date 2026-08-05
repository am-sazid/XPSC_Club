#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        int total;

        if (n <= 3)
        {
            total = n * x;
        }
        else
        {
            total = (3 * x) + ((n - 3) * y);
        }

        cout << total << endl;
    }

    return 0;
}