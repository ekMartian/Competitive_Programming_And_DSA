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
        string s; cin >> s;


        int ones = 0;
        int zeros = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                zeros++;
            }
            else
            {
                ones++;
            }
        }
        bool flag = false;
        if (ones % 2 == 0 && ((n % 2 == 0 && (n-zeros) % 2 == 0) || (n % 2 == 1 && (n-zeros) % 2 == 1)))
        {
            flag = true;
        }
        else if (zeros % 2 == 1 && ((n % 2 == 0 && (n-ones) % 2 == 1) || (n % 2 == 1 && (n-ones) % 2 == 0)))
        {
            flag = true;
        }
        if (flag == false)
        {
            cout << -1 << endl;
        }
        else
        {
            if (zeros % 2 == 1)
            {

            }
        }

        
    }
}