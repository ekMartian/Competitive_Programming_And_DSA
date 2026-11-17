#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int m = a.length();
        int n = b.length();
        int l = max(m, n);
        bool boolean = false;
        for (int i = 0; i < m; i++)
        {
            char checking = a[i];
            for (int j = 0; j < n; j++)
            {
                if (b[j] == a[i] && boolean == false)
                {
                    boolean = true;
                }
                else if (b[j] == a[j])
            }
        }
        for (int i = 0; i < l; i++)
        {


        }
    }
}