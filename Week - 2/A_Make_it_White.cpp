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
        string s;
        cin >> s;

        int f_poss = -1, l_poss = -1;

        f_poss = s.find('B');
        l_poss = s.rfind('B');


        int ans = l_poss - f_poss + 1;
        cout << ans << endl;
    }

    return 0;
}