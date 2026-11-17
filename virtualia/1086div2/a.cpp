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
        map <int, int> candies;
        for (int i = 0; i < n*n; i++)
        {
            int a;
            cin >> a;
            if (candies.find(a) == candies.end())
            {
                candies.insert({a, 1});
            }
            else
            {
                candies[a]++;

            }
        }
        int ans = 0;
        for (auto it = candies.begin(); it != candies.end(); it++)
        {
            ans = max(it->second, ans);
        }
        if (ans > n*n-n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        //cout << ans << endl;
        
    }
}