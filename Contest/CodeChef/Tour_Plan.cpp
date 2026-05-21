#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, z;
    cin >> x >> y >> z;
    if (z > 50)
    {
        int in_ans = z - 50;
        long long int fi_ans = y * in_ans;
        cout << fi_ans + x;
        return 0;
    }
    cout << x;
    return 0;
}