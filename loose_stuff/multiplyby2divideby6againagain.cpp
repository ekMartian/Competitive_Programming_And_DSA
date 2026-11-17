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
        // int a = n; 
        // int b = n;
        int acounter = 0;
        int bcounter = 0; 
        while (n % 2 == 0)
        {
            n = n / 2;
            acounter++;
        }
        while (n % 3 == 0)
        {
            n = n / 3;
            bcounter++;
        }
        if (n == 1 && bcounter >= acounter)
        {
            cout << 2*bcounter - acounter << endl;
        }
        else
        cout << -1 << endl;
        

    }
}