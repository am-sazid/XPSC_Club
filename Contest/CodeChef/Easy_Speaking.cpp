#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        string S;
        cin >> S;

        int cnt = 0;
        bool hard = false;

        for (char c : S)
        {
            if (isVowel(c))
            {
                cnt = 0;
            }
            else
            {
                cnt++;

                if (cnt >= 4)
                {
                    hard = true;
                    break;
                }
            }
        }

        if (hard)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}