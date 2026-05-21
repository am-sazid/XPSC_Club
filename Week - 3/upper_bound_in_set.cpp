#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<int> st;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        st.insert(x);
    }

    for (auto values : st)
    {
        cout << values << " ";
    }
    cout << endl;

    int l;
    cin >> l;

    auto it = st.upper_bound(l);

    if (it == st.end())
    {
        cout << "End" << endl;
    }
    else
    {
        cout << *it << endl;
    }

    return 0;
}