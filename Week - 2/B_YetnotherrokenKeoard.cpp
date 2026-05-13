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

        vector<char> ans;
        vector<int> small, capital;

        for (char c : s)
        {

            if (c == 'b')
            {
                if (!small.empty())
                {
                    ans[small.back()] = '#';
                    small.pop_back();
                }
            }

            else if (c == 'B')
            {
                if (!capital.empty())
                {
                    ans[capital.back()] = '#';
                    capital.pop_back();
                }
            }

            else
            {
                ans.push_back(c);

                int idx = ans.size() - 1;

                if (islower(c))
                    small.push_back(idx);

                else
                    capital.push_back(idx);
            }
        }

        for (char c : ans)
        {
            if (c != '#')
                cout << c;
        }

        cout << endl;
    }
}