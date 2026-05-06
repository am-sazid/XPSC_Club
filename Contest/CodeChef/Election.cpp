#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int majority = (N / 2) + 1;
    int needed = max(0, majority - K);

    cout << needed << endl;

    return 0;
}