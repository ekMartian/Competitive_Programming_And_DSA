#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p, m;
        cin >> n >> k >> p >> m;
        vector <pair<int, bool>> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (i != p-1)
            {
                arr.push_back({a, false});

            }
            else
            {
                arr.push_back({a, true});
            }
            
        }
        int cost = 0;
        int ans = 0;
        while (cost < m)
        {
            bool done = false;
            for (int i = 0; i < k; i++)
            {
                if (arr[i].second == true)
                {
                    cost+=arr[i].first;
                    if (cost <= m)
                    {
                        ans++;
                    }
                    pair <int, bool> copy = arr[i];
                    arr.erase(arr.begin() + i);
                    arr.push_back(copy);
                    done = true;
                    break;

                }


            }
            if (done == true)
            {
                continue;
            }
            int minimum = INT_MAX;
            for (int i = 0; i < k; i++)
            {
                minimum = min(minimum, arr[i].first);

                //auto it = find(arr.begin(), arr.end(), {minimum, false});
            }
            for (int i = 0; i < k; i++)
            {
                if (arr[i].first == minimum)
                {
                    cost+=arr[i].first;
                    pair <int, bool> copy = arr[i];
                    arr.erase(arr.begin() + i);
                    arr.push_back(copy);
                }
            }
            
            


        }
        cout << ans << endl;
    }
}