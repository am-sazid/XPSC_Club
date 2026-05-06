#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int x, y, z;
        cin >> x >> y >> z;

        vector<int> v = {x, y, z};
        sort(v.begin(), v.end());

        int a = v[0], b = v[1], c = v[2];

        if (a + b > c) {
            cout << 0 << endl;
        } else {
            cout << (c - (a + b) + 1) << endl;
        }
    }

    return 0;
}