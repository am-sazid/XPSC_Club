#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int australia = X + Z;

    if (Y > australia) {
        cout << 0 << endl;
    } else {
        cout << (australia - Y + 1) << endl;
    }

    return 0;
}