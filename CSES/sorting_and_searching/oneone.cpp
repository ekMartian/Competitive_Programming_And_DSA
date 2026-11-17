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
        string s;
        cin >> s;
        int maximum = n;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (i == 0 || i == n-1)
                {
                    maximum--;
                }
                else if (s[i+1] == '0' || s[i-1] == '0')
                {
                    maximum--;
                }
            }
        }
        for (int i = 1; i < n-1; i++)
        {
            if (s[i-1] == '1' && s[i+1] == '1')
            {
                s[i] = '1';
            }
        }
        for (int i = 1; i < n-1; i++)
        {
            if (s[i-1] == '1' && s[i+1] == '1')
            {
                s[i] = '0';
            }
        }
        int minimum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                minimum++;
            }

        }
        cout << minimum << " " << maximum << endl;

    }
}