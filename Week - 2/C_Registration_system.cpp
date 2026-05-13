#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> user;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        user.push_back(s);
    }
    cout << "OK" << endl;

    for (int i = 1; i < n; i++)
    {
        for (auto ss : user){
            if(ss == user[i+1]){
                cout<<ss<<1<<endl;
                break;
            }
            else{
                cout<<"OK"<<endl;
                break;
            }
        }
    }

    return 0;
}