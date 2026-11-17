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
    int at = 0;
    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (at < m)
        {
            int dist = abs(towers[at] - cities[i]);
            while (at + 1 < m && dist >= abs(towers[at+1] - cities[i]))
            {
                at++;
                dist = min(dist, abs(towers[at] - cities[i]));
            }
            ans = max(ans, dist);


        }
        
        
        

    }
    cout << ans << endl;
}

// how to write edge cse test case
// duplicate towers

// duplidcates
//edge cases, do without ai next time onwards
