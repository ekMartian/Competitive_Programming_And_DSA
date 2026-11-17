#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        vector <long long int> arr;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.rbegin(), arr.rend());
        int t = m;
        long long int sum = 0;
        long long int k = min(m, n);
        for (int i = 0; i < min(n, m); i++)
        {
            sum+=(t*arr[i]);
            t--;
        }
        cout << sum << endl;
    }
}