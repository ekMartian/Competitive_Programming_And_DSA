#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, n;
        cin >> x >> n;
        if (x % 2 == 1)
        {
            int toadd = 0;
            int tosubtract = 0;
            if (n % 4 != 0)
            {
                int a = n/4;
                int sum = 2*(n*(n-1)/2*4) + a + 1;
                toadd = sum;
                int diff = (n*(n-1)/2) - sum;
                tosubtract = diff;
                cout << x + toadd - tosubtract << endl;


            }
        }
        // for (long long int i = 1; i <= n; i++)
        // {
        //     if (x % 2 == 0)
        //     {
        //         x = x - i;
        //     }
        //     else
        //     {
        //         x = x + i;
        //     }

        // }
        // cout << x << endl;

    }
}