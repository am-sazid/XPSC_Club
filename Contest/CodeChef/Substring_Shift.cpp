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
        string s;
        cin >> n >> s;

        int i = 0;

        while (i < n && s[i] != 'z')
            i++;

        while (i < n && s[i] == 'z')
        {
            s[i] = 'a';
            i++;
        }

        cout << s << '\n';
    }

    return 0;
}