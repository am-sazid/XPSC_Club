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
        int n, q;
        cin >> n >> q;

        map<int, set<int>> mp;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

    

        for (int i = 1; i <= q; i++)
        {
            int l, r;
            cin >> l >> r;
            if ((mp.find(l) == mp.end()) || (mp.find(r) == mp.end()))
            {
                cout << "NO" << endl;
            }
            else
            {
                int q1, q2;
                q1 = *mp[l].begin(); 
                q2 = *mp[r].rbegin();
                
                if (q1< q2)
                {
                    cout<<"YES"<<endl;
                }

                else{
                    cout<<"NO"<<endl;
                }
                
            }
        }
    }
    return 0;
}