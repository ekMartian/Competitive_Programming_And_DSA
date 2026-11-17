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
        vector <int> god;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            god.push_back(a);
        }
        vector<int> prefs;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=god[i];
            prefs.push_back(sum);
        }
        reverse(god.begin(), god.end());
        vector <int> suffs;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=god[i];
            suffs.push_back(sum);
            
        }
        map <int, int> prefis;
        set <int> prefisa;
        for (int i = 0; i < n; i++)
        {
            prefis.insert({prefs[i], i});
            prefisa.insert(prefs[i]);
        }
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int here = suffs[i];
            if (prefisa.find(here) != prefisa.end())
            {
                if (prefis[here] + i + 1 < n)
                {
                    int anshere = prefis[here] + i + 2;
                    ans = max(ans, anshere);

                    
                }
            }

        }
        cout << ans << endl;
        // int left = 0;
        // int right = n-1;
        // int eating = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     int one = prefs[i] - prefs[0] + god[0];
        //     int two = prefs[n-1] - prefs[i] + 0;
        //     if (one == two)
        //     {

        //     }
        // }
    }
}