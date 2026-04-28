#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x;
    cin>>x;

    int price = 1000 * pow(2,4-x);  

    cout<<price<<endl;
    return 0;
}