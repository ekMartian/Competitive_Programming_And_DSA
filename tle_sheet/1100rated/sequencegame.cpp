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
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            minimum = min(minimum, a);
            maximum = max(maximum, a);
        }
        int x;
        cin >> x;
        if (x < minimum || x > maximum)
        {
            cout << "NO" << endl;

        }
        else
        {
            cout << "YES" << endl;
        }
    }
}