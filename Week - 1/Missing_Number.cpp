#include<bits/stdc++.h>
using namespace std;

int main() 
{
    long long int n;
    cin >> n;

    vector<long long int> v(n-1);
    for (int i = 0; i < n-1; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    long long int miss = 1;
    for (int i = 0; i < n-1; i++)
    {
        if (miss != v[i]) {
            cout << miss;
            return 0; 
        }
        miss++;
    }


    cout << miss;

    return 0;
}