#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int sleep = 0;
        int remaining = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && remaining == 0)
            {
                sleep++;
            }
            else if (s[i] == '0' && remaining > 0)
            {
                remaining--;
            }
            else if (s[i] == '1')
            {
                remaining = k;
            }
        }
        cout << sleep << endl;
    }
}