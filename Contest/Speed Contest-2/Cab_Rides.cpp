#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>> t;

    while (t--)
    {
        int x;
        cin>>x;

        cout<< max(200,100*x)<<endl;
    }
    

    return 0;
}