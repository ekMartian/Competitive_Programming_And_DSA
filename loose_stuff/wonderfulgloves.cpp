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
        long long int k;
        cin >> k;
        vector <long long int> left;
        vector <long long int> right;
        long long int rightsum = 0;
        long long int leftsum = 0;

        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            left.push_back(a);
            leftsum+=a;
        }
        for (int i = 0; i < n; i++)
        {
            long long int b;
            cin >> b;
            right.push_back(b);
            rightsum+=b;
        }
        sort(right.begin(), right.end());
        reverse(right.begin(), right.end());
        for (int i = 0; i < k-1; i++)
        {
            leftsum+=right[i];
        }
        // if (sum == leftsum)
        // {
            
        // }
        sort(left.begin(), left.end());
        reverse(left.begin(), left.end());
        for (int i = 0; i < k-1; i++)
        {
            rightsum+=left[i];
        }
        cout << max(leftsum, rightsum) + 1 << endl;
        // vector <pair<long long int, long long int>> sums;
        // for (int i = 0; i < n; i++)
        // {
        //     long long int c = left[i]+right[i];
        //     sums.push_back({c, i});
        // }
        // sort(sums.begin(), sums.end());
        // long long int sum = 0;
        // for (int i = 0; i < k-1; i++)
        // {
        //     sum+=(sums[n-1-i].first);
        //     cout << sum << endl;
        // }
        // vector <long long int> remaining;
        // for (int i = n-k; i >= 0; i--)
        // {
        //     int index = sums[i].second;
        //     long long int toadd = max(left[index], right[index]);
        //     sum+=toadd;
        //     cout << sum << endl;
        // }
        // for (int i = 0; i < n; i++)
        // {

        // }
        // cout << sum + 1 << endl;
    
    }
}