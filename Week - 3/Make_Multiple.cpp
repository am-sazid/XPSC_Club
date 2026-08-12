#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        queue<pair<int, int>> q;
        set<int> visited;

        q.push({n, 0});
        visited.insert(n);

        while (!q.empty())
        {
            int x = q.front().first;
            int steps = q.front().second;
            q.pop();

            if (x % 3 == 0)
            {
                cout << steps << '\n';
                break;
            }

            int a = x + 1;

            if (!visited.count(a))
            {
                visited.insert(a);
                q.push({a, steps + 1});
            }

            int b = ((x / 5) + 1) * 5;

            if (!visited.count(b))
            {
                visited.insert(b);
                q.push({b, steps + 1});
            }
        }
    }

    return 0;
}