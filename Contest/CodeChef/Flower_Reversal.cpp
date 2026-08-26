#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int t = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (s[i] != s[i + 1])
        {
            t++;
        }
    }

    int b0 = (n - 1) - t;

    int gain = 0;
    if (t >= 3)
    {
        gain = 2;
    }
    else if (t == 2)
    {
        gain = 1;
    }
    else
    {
        gain = 0;
    }

    cout << b0 + gain << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}