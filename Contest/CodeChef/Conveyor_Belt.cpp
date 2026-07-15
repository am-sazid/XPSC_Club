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
        int n, p;
        cin >> n >> p;

        string S;
        cin >> S;

        int leftFlip = 0;
        for (int i = p - 1; i >= 0; i--)
        {
            if (S[i] == 'R')
                leftFlip++;
        }

        int rightFlip = 0;
        for (int i = p - 1; i < n; i++)
        {
            if (S[i] == 'L')
                rightFlip++;
        }

        cout << min(leftFlip, rightFlip) << "\n";
    }

    return 0;
}