#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    pair<string,int> student = make_pair("sazid", 10);
    // cout<< student.first << " " << student.second << endl;

    student.first = "AM Sazid";
    student.second = 237759;

    auto [name , roll] = student;
    cout<< name << " " << roll;

    return 0;
}