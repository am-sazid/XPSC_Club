#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_set<string> seen;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (seen.count(s))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
            seen.insert(s);
        }
    }

    return 0;
}