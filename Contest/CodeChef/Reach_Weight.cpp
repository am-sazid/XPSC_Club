#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int cost = (N / 2) * 30;

        if (N % 2 == 1) {
            cost += 20;
        }

        cout << cost << endl;
    }


    return 0;
}