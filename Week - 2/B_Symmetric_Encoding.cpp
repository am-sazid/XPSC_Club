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

        string b;
        cin >> b;

        set<char> st(b.begin(), b.end());

        string r(st.begin(), st.end());
        int k = r.size();

        unordered_map<char, char> mp;

                for (int i = 0; i < k; i++)
        {
            mp[r[k - 1 - i]] = r[i];
        }

        string s = b;
        for (char &c : s)
        {
            c = mp[c];
        }

        cout << s << "\n";
    }

    return 0;
}