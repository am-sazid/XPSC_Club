#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;

    // mp.insert({"Sazid", 237759});
    // mp["sazid"] = 237759;

    // cout<<mp["sazid"]<<endl;

    mp[10] = 20;
    mp[8] = 30;
    mp[6] = 25;

    // for(auto [key,value] : mp){
    //     cout<< key << " -> " << value<<endl;
    // }

    // for (auto it : mp)
    // {
    //     int key = it.first, value = it.second;

    //     cout<< key << " -> " << value<<endl;
    // }

    // int x;
    // cin >> x;
    // auto it = mp.find(x);
    // if (it != mp.end())
    //     cout << it->first << "  " << it->second << endl;
    // else
    // {
    //     cout << "Key Not found";
    // }

    for (auto it : mp)
    {
        int key = it.first, value = it.second;

        cout << key << " -> " << value << endl;
    }
    cout<<'\n';
    auto  it = mp.begin();
    it++;
    cout<<  it->first << " " << it->second ;
    return 0;
}