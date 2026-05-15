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
        string s;
        cin >> s;

        int same_index = -1;

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == s[i - 1])
            {
                same_index = i;
                break;
            }
        }

        if (same_index == -1)
        {
            if (s.back() == 'a')
                s += 'b';
            else
                s += 'a';
            cout << s << endl;
            continue;
        }

        for (int i = 0; i < same_index; i++)
        {
            cout << s[i];
        }

        if (s[same_index] == 'a')
        {
            cout << 'b';
        }
        else
            cout << 'a';

        for (int i = same_index; i < s.size(); ++i)
        {
            cout << s[i];
        }

        cout << endl;
    }

    return 0;
}