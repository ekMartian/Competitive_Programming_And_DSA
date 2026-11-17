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
        vector <int> arr;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
// int 

        }
        if (k == 4)
        {
            int a = INT_MAX;
            int b = INT_MAX;
            int count = 0;
            int othercount = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    count++;
                }
                else
                {
                    othercount++;
                }
            }
            if (count >= 2)
            {
                a = 0;
            }
            else if (count == 1 && othercount > 0)
            {
                a = 1;
            }
            else if (count == 0 && othercount >= 2)
            {
                a = 2;
            }
            int minimum = k;
            for (int i = 0; i < n; i++)
            {
                int remainder = arr[i] % k;
                int tocheck;
                if (remainder == 0)
                {
                    tocheck = 0;
                }
                else
                {
                    tocheck = k - remainder;
                }
                // int tocheck = k - remainder;
                minimum = min(tocheck, minimum);

            }
            b = minimum;
            cout << min(a, b) << endl;

        }
        else
        {
            int minimum = k;
            for (int i = 0; i < n; i++)
            {
                int remainder = arr[i] % k;
                int tocheck;
                if (remainder == 0)
                {
                    tocheck = 0;
                }
                else
                {
                    tocheck = k - remainder;
                }
                // int tocheck = k - remainder;
                minimum = min(tocheck, minimum);

            }
            cout << minimum << endl;

        }
        

    }
}