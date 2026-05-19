#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, b;
    cin >> r >> b;

    if (r > b)
    {
        int i = r - b;
        int j = b * 5;
        cout << j + i;
    }
    else if (r < b)
    {
        int i = b - r;
        int j = r * 5;
        int ans = i * 2;

        cout << j + ans;
    }
    else
    {
        cout << r * 5;
    }

    return 0;
}