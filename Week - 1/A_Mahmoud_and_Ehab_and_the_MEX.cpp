#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    set<int> s;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }

    int moves = 0;

    for(int i = 0; i < x; i++) {
        if(s.count(i) == 0) {
            moves++;
        }
    }

   
    if(s.count(x)) {
        moves++;
    }

    cout << moves << endl;
}