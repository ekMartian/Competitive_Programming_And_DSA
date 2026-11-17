#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if ((n&1) == 0)
        {
            cout << n/2 << " " << n/2  << endl;
        }
        else
        {
            long long int ans = __LONG_LONG_MAX__;
            int tocout[2] = {0, 0};
            for (long long int i = 1; i < n; i++)
            {
                long long int a = i; 
                long long int b = n - a;
                long long int lcm = (a*b)/gcd(a, b);
                ans = min(ans, lcm);
                if (ans == lcm)
                {
                    tocout[0] = a;
                    tocout[1] = b;

                }
                if (gcd(a, b) > 1)
                {
                    break;
                }

            }
            cout << tocout[1] << " " << tocout[0] << endl;
        }
    }
}