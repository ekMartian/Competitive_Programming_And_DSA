#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, x;
        cin >> k >> x;
        while (k > 0)
        {
            x*=2;
            k--;
        }
        cout << x << endl;
    }
}
