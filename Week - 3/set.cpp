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

    // auto it = st.begin();
    // for (int i = 0; i < n; i++)
    // {

    //     cout<<*it<<endl;
    //     it++;
    // }

    // while (st.end())
    // {
    //     /* code */
    // }

    for (auto values : st)
    {
        cout << values << " ";
    }
    cout << endl;
    // auto it = st.find(25);

    // if (it != st.end())
    // {
    //     cout<< "Found";
    // }
    // else{
    //     cout<<"Not found";
    // }

    auto it = st.find(6);

    if (it != st.end())
    {
        st.erase(it);
        cout<< "Remove " << *it <<" from list"<<endl;
    }
    else
    {
        cout << "Not found";
    }

    for (auto values : st)
    {
        cout << values << " ";
    }
    cout << endl;

    cout<<st.count(2);

    return 0; 
}