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
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        int S = A[0] + A[N - 1];
        bool ok = true;

        for (int i = 0; i < N / 2; i++)
        {
            if (A[i] + A[N - 1 - i] != S)
            {
                ok = false;
                break;
            }
        }

        cout << (ok ? "Yes" : "No") << "\n";
    }

    return 0;
}