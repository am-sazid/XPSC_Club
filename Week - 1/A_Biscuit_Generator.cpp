#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, T;
    cin >> A >> B >> T;

    int times = T / A;  
    int total = times * B;

    cout << total << endl;

    return 0;
}