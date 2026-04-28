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

        int r, b, g;
        cin >> r >> b >> g;

        int sum;
        if (r == 0 || b == 0 == g > 0)
        {
            sum = (r * 3) + (b * 3) + (g * 3);
        }
        else
        {
            int mn = min({r, b, g});

            int co_sum = mn * 10;

            int co_sum2 = (r - mn) + (b - mn) + (g - mn);

            sum = co_sum + (co_sum2 * 3);
        }

        cout << sum << endl;
    }

    return 0;
}