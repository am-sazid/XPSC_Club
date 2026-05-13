#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;

    string s;
    cin>> s;

    sort(s.begin(), s.end());

    auto uni = unique(s.begin(),s.end());

    s.erase(uni, s.end());
    cout<< s<<endl;
    
    return 0;
}