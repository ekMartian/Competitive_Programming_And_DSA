#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector <int> armies;
    for (int i =0 ; i < m; i++)
    {
        int a;
        cin >> a;
        armies.push_back(a);
    }
    int fedor;
    cin >> fedor;
    // vector <int> checker;
    // for (int i = 0; i < n; i++)
    // {
    //     checker.push_back(fedor & 1);
    //     fedor >>= 1;
    // }
    vector <int> counts;
    for (int i = 0; i < m; i++)
    {
        int checking = armies[i];
        int count = 0;
        int thisone = (checking ^ fedor);
        count = __builtin_popcount(thisone);

        // for (int j = 0; j < n; j++)
        // {
        //     int thisone = checking & 1;
        //     if (thisone == checker[j])
        //     {
                
        //     }
        //     else
        //     {
        //         count++;
        //     }
        //     checking >>= 1;
            
        // }
        counts.push_back(count);
    }
    sort(counts.begin(), counts.end());
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        if (counts[i] <= k)
        {
            ans++;
        }
    }
    cout << ans << endl;
    // reverse(counts.begin(), counts.end());
    // for (int i = 0; i < m; i++)
    // {
    //     if ()
    // }
    // for (int i = 0; i < m; i++)
    // {

    // }
    // for (int )
    // for (int i = 0; i < n; i++)
    // {
    //     int checking = x & 1;
    //     fedor.push_back(x&1);
    // }
}