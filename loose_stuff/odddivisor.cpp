#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        bool flag = true;
        if (n % 2 != 0)
        {
            flag = false;
        }
        else
        {
            while (n % 2 == 0)
            {
                n = n / 2;
            }
            if (n == 1)
            {
                flag = true;
            }
            else
            {
                flag = false;
            }
        }
        if (flag == true)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        // while (n % 2 == 0)
        //     n = n / 2;
        // }
        // if (n == 0)
        // {
        //     cout << "NO" << endl;
        // }
        // else
        // {
        //     cout << "YES" << endl;
        // }
    // {
        
    // })
    }
}