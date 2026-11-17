#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l;
        cin >> n >> m >> l;
        int x = 0;
        vector <int> times;
        times.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            times.push_back(a);
        }
        
        x = l-times[n-1];
        int remaining = n;
        int amount = 0;
        // int at = 0;
        for (int i = 1; i < n+1; i++)
        {
            int time = times[i];
            amount = amount + (times[i] - times[i-1])/remaining;
            remaining--;
        }
        // for (int i = 1; i <= l; i++)
        // {
        //     if (times[at] == i)
        //     {

        //     }
        //     {

        //     }
            
        // }
        // int distri = min(n+1, m);
        x = x + amount;
        cout << x << endl;
    }
}
