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
        vector <int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        vector <int> amsterdam;
        int l = 0;
        for (int i = 0; i < n/2; i++)
        {
            int a = abs(arr[i] - arr[n-1-i]);
            amsterdam.push_back(a);
            l++;
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        int hcf = amsterdam[0];
        for (int i = 0; i < l; i++)
        {
            hcf = gcd(hcf, amsterdam[i]);

        }
        cout << hcf << endl;
    }
}