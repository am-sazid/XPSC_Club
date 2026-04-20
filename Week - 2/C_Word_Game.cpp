#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<string>> v(3, vector<string>(n));
        map<string, int> freq;

      
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> v[i][j];
                freq[v[i][j]]++;
            }
        }

        vector<int> score(3, 0);

       
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (freq[v[i][j]] == 1)
                    score[i] += 3;
                else if (freq[v[i][j]] == 2)
                    score[i] += 1;
            }
        }

        cout << score[0] << " " << score[1] << " " << score[2] << "\n";
    }

    return 0;
}