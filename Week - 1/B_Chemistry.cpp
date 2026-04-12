#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        int odd = 0;
        for (int f : freq) {
            if (f % 2) odd++;
        }

        int need = max(0, odd - 1);

        if (k >= need && (k - need) % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}