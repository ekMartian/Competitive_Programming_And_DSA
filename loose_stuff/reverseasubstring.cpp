#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int t;
    // while (t--)
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i < n; i++)
    {
        if (s[i] >= s[i-1])
        {
            continue;
        }
        else
        {
            // cout << "i-1" << " " << i << endl;
            // cout <?




            cout << "YES" << endl;
            cout << i << " " << i+1 << endl;
            
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}