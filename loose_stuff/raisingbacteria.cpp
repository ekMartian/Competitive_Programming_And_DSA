#include <bits/stdc++.h>
using namespace std;

//countingeneru numberen settenbittererryyu

int main()
{
    int n;
    int ans = 0;
    cin >> n;
    // ans = __builtin_popcount(n);
    // while (n > 0)
    // {
    //     if ((n&1) == 1)
    //     {
    //         ans++;
    //     }
    //     n = n >> 1;
    // }
    while (n>0)
    {
        n = n & (n-1);
        ans++;
    }
    cout << ans << endl;


    
}