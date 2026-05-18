#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_map<string, string> mp; // ip -> name

    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        mp[ip] = name;
    }

    for (int i = 0; i < m; i++)
    {
        string cmd, ipWithSemicolon;
        cin >> cmd >> ipWithSemicolon;

        string ip = ipWithSemicolon.substr(0, ipWithSemicolon.size() - 1);

        cout << cmd << " " << ipWithSemicolon << " #" << mp[ip] << "\n";
    }

    return 0;
}