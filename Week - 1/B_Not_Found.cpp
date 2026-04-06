#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    string az = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < 26; i++)
    {
        bool flg = false;

        for (int j = 0; j < s.size(); j++)
        {
            if (az[i] == s[j])
            {
                flg = true;
                break;
            }
        }
        if (!flg)
        {
            cout << az[i] << endl;
            return 0;
        }
    }

    cout << "None";


    return 0;
}