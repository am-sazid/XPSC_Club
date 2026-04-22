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

        string s;
        cin >> s;

        bool flg = true;

        for (int i = 0; i < n; i++)
        {
            int j = n - i - 1;

            if (i > j)
                break;

            if (s[i] == '?' && s[j] == '?')
            {
                flg = false;
                break;
            }
        }

        if (flg)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}