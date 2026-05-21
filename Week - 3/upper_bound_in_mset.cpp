#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    multiset<int> mst;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mst.insert(x);
    }

    for (auto values : mst)
    {
        cout << values << " ";
    }
    cout << endl;

    int lb;
    cin >> lb;

    auto it = mst.upper_bound(lb);

    mst.erase(it);

    if (it == mst.end())
    {
        cout << "End" << endl;
    }
    else
    {
        cout << *it << endl;
    }

       for (auto values : mst)
    {
        cout << values << " ";
    }
    cout << endl;
    
    cout<<"done";

    return 0;
}