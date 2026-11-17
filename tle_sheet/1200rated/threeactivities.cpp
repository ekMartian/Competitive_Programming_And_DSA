#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <pair<int, int>> a;
        vector <pair<int, int>> b;
        vector <pair<int, int>> c;
        for (int i = 0; i < n; i++)
        {
            int ai;
            cin >> ai;
            a.push_back({ai, i});
        }
        for (int i = 0; i < n; i++)
        {
            int bi;
            cin >> bi;
            b.push_back({bi, i});
        }
        for (int i = 0; i < n; i++)
        {
            int ci;
            cin >> ci;
            c.push_back({ci, i});
        }
        vector<pair<int, int>> as;
        vector<pair<int, int>> bs;
        vector<pair<int, int>> cs;
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());
        for (int i = 0; i < 3; i++)
        {
            as.push_back({a[i].first, a[i].second});
            bs.push_back({b[i].first, b[i].second});
            cs.push_back({c[i].first, c[i].second});
        }
        int maximum = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (as[i].second != bs[j].second && as[i].second != cs[k].second && bs[j].second != cs[k].second)
                    {
                        int sum = as[i].first + bs[j].first + cs[k].first;
                        maximum = max(maximum, sum);
                    }
                }
            }
        }
        cout << maximum << endl;

    }
}