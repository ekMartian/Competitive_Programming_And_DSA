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
        vector <long long int> as;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            as.push_back(a);
        }
        long long int sum = 0;
        vector <long long int> prefix_sums;
        for (int i = 0; i < n; i++)
        {
            sum+=as[i];
            prefix_sums.push_back(sum);
        }
        vector <long long int> divisors;
        for (long long int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                divisors.push_back(i);
            }
        }
        long long int ans = 0;
        for (int i = 0; i < divisors.size(); i++)
        {
            long long int maximum = LLONG_MIN;
            long long int minimum = LLONG_MAX;
            // int times = n/divisors;
            for (int j = 0; j< n; j +=divisors[i])
            {
                long long int sumhere = prefix_sums[j+divisors[i]-1] - prefix_sums[j] + as[j];
                maximum = max(maximum, sumhere);
                minimum = min(minimum, sumhere);

            }
            long long int diff = maximum - minimum;
            ans = max(ans, diff);
            // for (int j = 0; j < times; )
            
        }
        cout << ans << endl;
    }
}

// prefix sum
// constraints, what could they become, check input, checkk codeforces log
// march 4, begininng, just before 2 pm 
// GOD. 