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
        sort(s.begin(), s.end());
        s = s + '*';
        int a= 0, b = 0;
        for (int i = 1; i <= n; i++)
        {
            if (s[i] == s[i-1])
            {
                a++;
                i++;

            }
            else
            {
                b++;
            }
        }
        cout << a << b  << endl;

    }
}
