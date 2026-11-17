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
        vector <int> gap;
        int first;
        cin >> first;
        arr.push_back(first);
        int ans = abs(1-first);

        for (int i = 1; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
            int num = abs(i+1-a);
            gap.push_back(num);
        }
        for (int i = 0; i < n-1; i++)
        {
            ans = gcd(ans, gap[i]);
        }
        cout << ans << endl;
        
    }
}