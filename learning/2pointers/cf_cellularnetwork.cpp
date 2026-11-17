#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector <int> cities;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        cities.push_back(a);
    }
    vector <int> towers;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        towers.push_back(a);
    }
    int start = 0;
    bool flag = false;
    int ans = 0;
    int minimum = INT_MAX;
    while (flag == false)
    {
        int retainer = minimum;
        int diff = abs(cities[0] - towers[start]);
        minimum = min(minimum, diff);
        if (minimum == retainer)
        {
            start = start;
            flag = true;
        }
        else
        {
            start = start + 1;
        }

    }
    int at = start;
    for (int i = 1; i < n; i++)
    {
        if (at < m)
        {
            int dist;
            if (at + 1 < m)
            {
                dist = min(abs(cities[i] - towers[at]), abs(cities[i] - towers[at + 1]));
                if (dist == abs(cities[i] - towers[at+1]))
                {
                    at = at + 1;        
                }
                ans = max(ans, dist);
            }
            else
            {
                dist = abs(cities[i] - towers[at]);
                ans = max(ans, dist);

            }
            
            
            if (dist == abs(cities[i] - towers[at+1]))
            {
                at = at + 1;        
            }
            ans = max(ans, dist);

        }
        else
        {
            break;
        }
        
    }
    cout << ans << endl;
    
}