#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;   
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int c, k;
        cin >> c >> k;
        vector <long long int> arr;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            long long int a = arr[i];
            if (c >= a)
            {
                long long int l = c - a;
                if (k >= l)
                {
                    a = a + l;
                    k = k - l;
                }
                else
                {
                    a = a + k;
                    k = 0;
                }
                c = c + a;
            }
            // int l = c - a;
            // if (k >= l)
            // {
            //     a = a + l;
            //     k = k - l;
            // }
            // else
            // {
            //     a = a + k;
            //     k = 0;
            // }
            // c = c + a;
            // if (a <= c)
            // {
            //     if

            // }
            // else
            // {
            //     continue;
            // }
        }
        cout << c << endl;
    }
}