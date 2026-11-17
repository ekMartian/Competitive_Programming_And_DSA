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
        int x;
        cin >> x;
        vector <int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        int m = n;
        int count = 0;
        for (int i = n-1; i >= 0; i--)
        {
            int a = arr[i];
            int req;
            if (a >= x)
            {
                req = 1;
            }
            // else if (a < x)
            // {
            //     if (x)
            // }
            else if (x % a == 0)
            {
                req = x/a;
            }
            else
            {
                req = x/a+1;
            }
            if (m - i >= req)
            {
                m = m - req;
                count++;


            }
        }
        cout << count << endl;
    }
}