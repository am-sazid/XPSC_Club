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
        int N, X, K;
        cin >> N >> X >> K;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        unordered_map<int, int> freq;
        for (int x : A)
            freq[x]++;

        vector<int> counts;
        for (auto &p : freq)
        {
            counts.push_back(p.second);
        }

        sort(counts.rbegin(), counts.rend());

        int sum = 0;
        for (int i = 0; i < K && i < (int)counts.size(); i++)
        {
            sum += counts[i];
        }

        cout << min(X, sum) << "\n";
    }

    return 0;
}