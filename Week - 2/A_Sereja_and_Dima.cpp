#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>> n;

    deque<int> dq(n);


    for (int i = 0; i < n; i++)
    {
        cin>> dq[i];

    }


    int ans1 = 0 , ans2 = 0, turn = 1;

    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back(), mx;
        
        mx = max(left,right);

        if ( turn % 2 != 0){
            ans1 += mx;
        }
        else{
            ans2 += mx;
        }

        if (mx == left){
            dq.pop_front();
        }
        else{
            dq.pop_back();
        }

        turn++;
    }

    cout<< ans1<< " " << ans2;
    
     
    return 0;
}