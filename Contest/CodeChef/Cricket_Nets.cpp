#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int X;
        cin >> X;

        int first_runs = min(20, X);
        int cost = first_runs * 10;

        int remaining = max(0, X - 20);
        int second_balls = remaining / 2;
        cost += second_balls * 5;

        cout << cost << "\n";
    }

    return 0;
}