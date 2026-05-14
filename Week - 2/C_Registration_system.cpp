#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> mp;

    while (n--)
    {
        string s;
        cin >> s;

        if (mp[s] == 0)
        {
            cout << "OK" << endl;
            mp[s] = 1;
        }

        else
        {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }

    // string user[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin>> user[i];
    // }
    // cout << "OK" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (user[i] == user[j])
    //         {
    //             cout << user[j] << 1 << endl;
    //             break;
    //         }
    //         else
    //         {
    //             cout << "OK" << endl;
    //             break;
    //         }
    //     }
    // }

    return 0;
}