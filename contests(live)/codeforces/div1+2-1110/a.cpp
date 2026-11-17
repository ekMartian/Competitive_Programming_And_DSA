#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (k > n/2)
        {
            cout << -1 << endl; continue;
        }
        int count = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'R')
            {
                continue;

            }
            else
            {
                count++;
            }
        }
        for (int i = 0; i < k; i++)
        {

            if (s[n-1-i] == 'L')
            {
                continue;

            }
            else
            {
                count++;
            }
        }
        cout << count << endl;
    }
}
