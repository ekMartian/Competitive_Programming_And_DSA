#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, a, b;
        cin >> l >> a >> b;
        if (gcd(l, b) == 1)
        {
            cout << l-1 << endl;
        }
        else
        {
            int ans = a;
            int at = (a + b) % l;
            while (at != a)
            {
                ans = max(ans, at);
                at = (at+b)%l;
            }
            cout << ans << endl;
        }
    }
}