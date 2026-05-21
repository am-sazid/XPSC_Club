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


    // auto it = mst.begin();
    // it++;
    // it++;
    // it++;
    // it++;
   

    // cout<< *it <<endl;
   

    for (auto values : mst)
    {
        cout << values << " ";
    }
    cout << endl;
    // auto it = mst.find(6);

    // if (it != mst.end())
    // {
    //     cout<< "Found"<<endl;
    // }
    // else{
    //     cout<<"Not found"<<endl;
    // }

    // auto it = mst.find(9);

    // if (it != mst.end())
    // {
    //     mst.erase(it);
    //     cout<< "Remove " << *it <<" from list"<<endl;
    // }
    // else
    // {
    //     cout<< *it  << "Not found";
    // }

    // mst.erase(9);

    for (auto values : mst)
    {
        cout << values << " ";
    }
    cout << endl;
 
    cout<< mst.count(9);

    return 0; 
}