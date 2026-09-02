#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = 0; i <= k; i++) {
            int left = i;
            int right = n - (k - i) - 1;

            int sum = 0;

            for (int j = left; j <= right; j++) {
                sum += a[j];
            }

            ans = max(ans, sum);
        }

        cout << ans << endl;
    }

    return 0;


    return 0;
}