#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x;
        cin >> n >> x;
        long long int maximum = 0;
        long long int minimum = 0;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            if (a % x == 0)
            {
                maximum+=(a/x);
            }
            else
            {
                maximum+=(a/x + 1);
            }
            minimum+=a;
        }
        if (minimum % x == 0)
        {
            minimum/=x;
        }
        else
        {
            minimum = minimum/x + 1;
        }

        cout << minimum << " " << maximum << endl;

    }
}