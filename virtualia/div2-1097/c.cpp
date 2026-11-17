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
        string a;
        string b;
        cin >> a;
        cin >> b;
        int sum = 0;
        bool is = true;
        for (int i = 0; i < n; i++)
        {
            char one = a[i];
            char two = b[i];
            if (sum == 0)
            {
                is = true;
            }
            else
            {
                is = false;
            }
            if (one == '(')
            {
                sum++;
            }
            else if (one == ')')
            {
                sum--;
            }
            if (two == '(')
            {
                sum++;
            }
            else if (two = ')')
            {
                sum--;
            }
            if (is == true && sum <= 0)
            {
                cout << "NO" << endl;
                break;
            }
            else if (i == n-1 && sum == 0 && n % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else if (i == n-1 && sum != 0)
            {
                cout << "NO" << endl;
            }
            else if (i == n-1 && sum == 0 && n % 2 == 1)
            {
                cout << "N0" << endl;
            }
        }
    }
}