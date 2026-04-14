#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    // int n ;
    // cin>> n;

    // pair<string, int> students[n];

    // auto [name, roll] = students;

    // for (int i = 0; i < 3; i++)
    // {
    //     cin>> students[i].first >> students[i].second;
    // }
    
    // for(auto [x,y] : students){
    //     cout<< x <<" "<< y <<'\n';
    // }

    pair<string,pair<int,int>> p = {"sazid",{10,1727}} ;

    auto name = p.first;
    auto roll = p.second.first;
    auto phn = p.second.second;

    cout<< name << " " << roll << " " << phn<< endl;
    

    return 0;
}