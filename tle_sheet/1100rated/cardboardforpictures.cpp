#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, c;
        cin >> n >> c;
        vector <long long int> arr;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back(a);
        }
        long long int low = 0;
        long long int high = sqrt(c/n);
        long long int mid = (high - low) / 2;
        int answer;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            long long int ans = 0;
            for (int i = 0; i < n; i++)
            {
                ans+=((arr[i] + 2*mid)*(arr[i] + 2*mid));
            }
            if (ans == c)
            {
                answer = mid;
                break;
            }
            else if (ans < c)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << answer << endl;
        
    }
}

// binary search on anws.r , correcten identifier. guten joberno. 