#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string user[n];

    for (int i = 0; i < n; i++)
    {
        cin>> user[i];
    }
    cout << "OK" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (user[i] == user[j])
            {
                cout << user[j] << 1 << endl;
                break;
            }
            else
            {
                cout << "OK" << endl;
                break;
            }
        }
    }

    return 0;
}