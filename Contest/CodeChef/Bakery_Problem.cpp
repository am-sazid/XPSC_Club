#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>> n >>k;

    int w_bred = k + (60*n);
    int w_o_bred = n* 100;
    
    cout<<min(w_bred,w_o_bred)<<endl;

    return 0;
}