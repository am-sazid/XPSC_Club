#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int L, R;
    cin >> L >> R;

    for (int i = L; i <= R; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    return 0;
}