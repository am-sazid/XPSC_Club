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

        vector<int> p(n + 1);
        vector<int> pos(n + 1);
        
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
            pos[p[i]] = i;
        }

        vector<pair<int, int>> swaps;

        // Use element 1 and N as anchors
        // First, bring 1 to position 1 if not already there
        if (pos[1] != 1)
        {
            swaps.push_back({1, pos[1]});
            int old_val = p[1];
            swap(p[1], p[pos[1]]);
            pos[old_val] = pos[1];
            pos[1] = 1;
        }
        
        // Now 1 is at position 1. Place all other elements
        for (int val = 2; val <= n; val++)
        {
            if (pos[val] == val) continue;
            
            // We can always swap with position 1 because:
            // |p[1] - val| = |1 - val| = val - 1 >= |1 - pos[val]|
            // This holds when pos[val] <= val
            if (pos[val] <= val)
            {
                swaps.push_back({1, pos[val]});
                int old_val = p[1];
                swap(p[1], p[pos[val]]);
                pos[old_val] = pos[val];
                pos[val] = 1;
                
                // Now swap to correct position
                swaps.push_back({1, val});
                old_val = p[1];
                swap(p[1], p[val]);
                pos[old_val] = 1;
                pos[val] = val;
            }
            else
            {
                // pos[val] > val, swap directly
                swaps.push_back({val, pos[val]});
                int old_val = p[val];
                swap(p[val], p[pos[val]]);
                pos[old_val] = pos[val];
                pos[val] = val;
            }
        }

        cout << swaps.size() << '\n';
        for (auto &sw : swaps)
        {
            cout << sw.first << " " << sw.second << '\n';
        }
    }

    return 0;
}