#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, y;
        cin >> n >> x >> y;

        long long int forx = n/x;
        long long int fory = n/y;
        long long int lcm = x*y/gcd(x, y);
        long long int forboth = n/lcm;
        forx = forx - forboth;
        fory = fory - forboth;
        long long int toadd = forx*n - (forx)*(forx-1)/2;
        long long int tosubtract = fory*(fory+1)/2;

        // long long int low = 1;
        // long long int high = n;
        // long long int toadd = 0;
        // long long int tosubtract = 0;
        // for (int i = 1; i < n+1; i++)
        // {
        //     if (i % x == 0 && i % y != 0)
        //     {
        //         toadd+=high;
        //         high--;
        //     }
        //     else if (i % x != 0 && i % y == 0)
        //     {
        //         tosubtract+=low;
        //         low++;
        //     }
        // }
        
        
        cout << toadd - tosubtract << endl;
    }
}

// memory!!
// simpler time complexity!!
// math!!