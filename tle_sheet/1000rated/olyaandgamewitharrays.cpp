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
        vector<vector<int>> master;
        pair<int, pair<int, int>> lowest;
        int minimum = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            vector <int> here;
            for (int j = 0; j < m; j++)
            {
                int a;
                cin >> a;
                here.push_back(a);
                if (minimum > a)
                {
                    lowest = {a, {i, j}};
                    minimum = a;
                }
            }
            master.push_back(here);
        }
        int sum = minimum;
        vector <int> others;
        for (int i = 0; i < n; i++)
        {
            vector<int> here = master[i];
            sort(here.begin(), here.end());
            others.push_back(here[1]);
            // if (i != lowest.second.first)
            // {
            //     sum+=(here[1]);
            // }

        }
        sort(others.begin(), others.end());
        for (int i = 1; i < n; i++)
        {
            sum+=others[i];
        }
        cout << sum << endl;
    }
}