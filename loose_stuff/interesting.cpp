#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10000005;
vector <bool> is_prime (MAXN, true);


void solve()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] == true)
        {
            count += n/i;
        }
    }
    cout << count << endl;
}
int main()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAXN; i++)
    {
        if (is_prime[i] == false)
        {
            continue;
        }
        for (int j = i * i; j < MAXN; j+=i)
        {
            is_prime[j] = false;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}