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
        if (x & 1)
        {
            long long int toadd = 0;
            long long int tosubtract = 0;
            if (n % 4 > 1)
            {
                int a = n /4;
                toadd = toadd + 2*(a)*(a+1)/2*4;
                toadd = toadd + 1;
                toadd = toadd + (a)*(a+1)/2;

                


            }

        }
    }
}