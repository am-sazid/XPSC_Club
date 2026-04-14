#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //  tuple<string,int, string> t = make_tuple("Sazid", 10, " 0172709");
    // tuple<string,int, string> t = {"Sazid", 10, "0172709"};

    //  cout<< get<0>(t) << " " << get<1>(t) << " " << get<2>(t) <<'\n';

    // auto[name,roll,phnNum] = t;

    // cout<<name << " " << roll << " " << phnNum << '\n';
    int n;
    cin >> n;
    tuple<string, int, int> t[n];

    for (int i = 0; i < n; i++)
    {
        cin>> get<0>(t[i]) >> get<1>(t[i]) >> get<2>(t[i]);
    }

    for(auto [x,y,z] : t){
        cout<< x << " " << y << " " << z << endl;
    }

    return 0;
}