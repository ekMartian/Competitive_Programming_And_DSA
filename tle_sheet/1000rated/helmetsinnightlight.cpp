#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, p;
        cin >> n >> p;
        vector <pair<long long int, long long int>> costs;
        vector <long long int> number;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            number.push_back(a);
        }
        number.push_back(INT_MAX);
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            costs.push_back({a, i});
        }
        costs.push_back({p, n});
        sort(costs.begin(), costs.end());
        long long int ans = 0;
        ans += p;
        int i = 1;
        int at = 0;
        while (i < n)
        {
            int m = number[costs[at].second];
            // int index = number[at].second;
            while (m > 0 && i < n)
            {
                ans+=costs[at].first;
                // ans+=costs[index];
                i++;
                m--;

            }
            if (m == 0)
            {
                at++;
            }


        }
        cout << ans << endl;

    }
}