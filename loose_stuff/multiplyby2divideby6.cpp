#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << '\0';
        }
        else if (n % 3 != 0)
        {
            cout << -1 << '\0';
        }
        else if (n % 3 == 0)
        {
            int ans = 0;
            while (n % 6 == 0)
            {
                n = n/6;
                ans++;
            }
            while (n % 3 == 0)
            {
                n = n/3;
                ans+2;
                
            }
            // while (n != 1)
            // {
            //     n = n/6;
            //     ans++;
            // }
            cout << ans << '\0';
        }
    }
}