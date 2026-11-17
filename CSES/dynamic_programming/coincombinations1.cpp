#include <bits/stdc++.h>
using namespace std;

int main()
{
    int MOD = 1e9+7;
    int n, x;
    cin >> n >> x;
    vector <int> coins;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        coins.push_back(a);
    }
    vector <int> dp(x+1, 0);
    dp[0] = 1;
    for (int i = 1; i < x+1; i++)
    {
        for (int c : coins)
        {
            if (i - c >= 0)
            {
                dp[i] = (dp[i] + dp[i-c]) % MOD;
            }

        }
    } 
    cout << dp[x] << endl;
    return 0;
}