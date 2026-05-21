#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    multiset<int> st;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        st.insert(x);
    }

    // cout<< st.size()<<endl;

    for (int i = 1; i <= n; i++)
    {
        auto it = st.lower_bound(i);

        if (it != st.end())
        {
            st.erase(it);
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}