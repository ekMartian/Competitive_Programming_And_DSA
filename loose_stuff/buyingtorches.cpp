#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, k;
        cin >> x >> y >> k;
        long long int trades = 0;
        trades+=k;
        
        // else
        // trades
        trades+=((k-1+k*y)/(x-1));
        if (((k-1+k*y)%(x-1)) != 0)
        {
            trades+=1;

        }
        cout << trades << endl;
        // int n;
        // cin >> n;

    }
}