#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; 
        int m; 
        cin >> n >> m;
        vector <int> as;
        vector <int> bs;
        vector <int> cs;
        vector <pair <int, int>> bc;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            as.push_back(a);
        }
        for (int i = 0; i < m; i++)
        {
            int b;
            cin >> b;
            bs.push_back(b);
        }
        for (int i = 0; i < m; i++)
        {
            int c;
            cin >> c;
            cs.push_back(c);
        }
        for (int i = 0; i < m; i++)
        {
            int b, c;
            b = bs[i];
            c = cs[i];
            bc.push_back({b, c});
            // cs.push_back(c);
        }
        sort(bc.begin(), bc.end());
        sort(as.begin(), as.end());
        reverse(bc.begin(), bc.end());
        reverse(as.begin(), as.end());
        sort(bc.begin(), bc.end(), [](const auto &a, const auto &b) {
        return a.second > b.second; // Ascending order
        });
        // reverse(bc.begin(), bc.end(), [](const auto &a, const auto &b) {
        // return a.second < b.second; // Ascending order
        // });
        int at = 0;
        int takenout = 0;
        int i = 0;
        while (i < m && at < n)
        {
            if (as[at] >= bc[i].first)
            {
                takenout++;
                if (bc[i].second > 0)
                {
                    as[at] = max(as[at], bc[i].second);
                }
                else
                {
                    at++;
                }
                i++;
            }
            else
            {
                i++;
            }
            

        }
        cout << takenout << endl;
    }
}