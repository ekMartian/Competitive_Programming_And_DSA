#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    t = 1;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector <int> powers;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            powers.push_back(a);
        }
        int l = n;
        int base = 0;
        int ans = 0;
        sort(powers.begin(), powers.end());
        for (int i = n-1; i >= base; i--)
        {
            int needed = 1;
            int a = powers[i];
            int aretainer = a;
            while (a <= d)
            {
                a = a + aretainer;
                needed++;
            }
            base = base + needed - 1;
            if (base <= i)
            {
                ans++;
            }


        }
        cout << ans << endl;
    }
}