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
        vector <int> as; 
        vector <int> bs;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a; 
            as.push_back(a);

        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a; 
            bs.push_back(a);

        }
        int ones = 0;
        int zeros = 0;
        bool one = false;
        bool zero = false;
        for (int i = 0; i < n; i++)
        {
            if (as[i] != bs[i])
            {
                if (as[i] ==1)
                {
                    ones++;
                }
                else
                {
                    zeros++;
                }
            }
            else
            {
                if (as[i] == 1)
                {
                    one = true;
                }
                else
                {
                    zero=true;
                }
            }
        }
        // cout << "wait ";
        // cout << ones << " " << zeros << endl;

        if (ones == 0 && zeros == 0)
        {
            cout << 0 << endl;
        }
        else if (ones == 0 && zeros > 0)
        {
            if (zero == true && one == true)
            {
                cout << 2 << endl;

            }
            else{
            cout << -1 << endl;}
        }
        else if (ones > 0 && zeros == 0)
        {
            if (ones % 2 == 0)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else if (ones > 0 && zeros > 0)
        {
            if (ones % 2 == 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        
        // if (zeros > 0 && ones % 2 == 0 && ones > 0)
        // {
        //     cout << 2 << endl;
        // }
        // else if (zeros == 0 && ones % 2 == 1)
        // {
        //     cout << 1 << endl;
        // }
        // else if (zeros == 0 && ones == 0)
        // {
        //     cout << 0 << endl;
        // }
        // else
        // {
        //     cout << -1 << endl;
        // }
    }
}// hi