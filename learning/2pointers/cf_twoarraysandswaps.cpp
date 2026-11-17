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
        vector <int> a;
        for (int i = 0; i < n; i++)
        {
            int ai;
            cin >> ai;
            a.push_back(ai);
        }
        // cin >> n >> k;
        vector <int> b;
        for (int i = 0; i < n; i++)
        {
            int bi;
            cin >> bi;
            b.push_back(bi);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = 0;
        int j = n-1;
        int swaps = 0;
        while (swaps < k && a[i]<b[j])
        {
            a[i] = b[j];
            i++;
            j--;
            swaps++;
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=a[i];
        }
        cout << sum << endl;


    }
    
}