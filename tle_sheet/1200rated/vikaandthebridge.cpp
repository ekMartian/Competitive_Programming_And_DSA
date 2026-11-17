#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector <int> colours;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            colours.push_back(a);
        }
        vector <vector <int>> positions(k);
        for (int i = 0; i < n; i++)
        {
            positions[colours[i]-1].push_back(i+1);
        }
        vector <pair <int, int>> maxes(k, {0, 0});
        for (int i = 0; i < k; i++)
        {
            if (positions[i].size() == 0)
            {
                continue;
            }
            int one = positions[i][0] - 0 - 1;
            int two = n - positions[i][positions[i].size() - 1];
            if (one == two)
            {
                maxes[i].first = maxes[i].second = one;
            }
            else
            {
                maxes[i].first = min(one, two);
                maxes[i].second = max(one, two);
            }
            for (int j = 1; j < positions[i].size(); j++)
            {
                int dist = positions[i][j] - positions[i][j-1] - 1;
                if (dist >= maxes[i].second)
                {
                    maxes[i].first = maxes[i].second;
                    maxes[i].second = dist;
                }
                else if (dist >= maxes[i].first)
                {
                    maxes[i].first = dist;
                }
            }
        }
        int minimum = INT_MAX;
        for (int i = 0; i < k; i++)
        {
            int here = max(maxes[i].first, maxes[i].second/2);
            if (positions[i].size() > 0)
            {
                minimum = min(minimum, here);
            }
            
        }
        cout << minimum << endl;
    }
}

// seg fault, does it always occur. always check fot ehsefauls or smn idk 