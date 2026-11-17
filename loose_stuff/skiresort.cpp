#include <bits/stdc++.h>
using namespace std;

long long int ans(int gaps, int k)
{
    
    long long int ans = 0;
    ans = 
    for (long long int i = gaps; i >= k; i--)
    {

        ans+=(i-k+1);
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, q;
        cin >> n >> k >> q;
        bool doing = false;
        vector <long long int> temps;
        vector <long long int> gaps;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            temps.push_back(a);
            // if ()
        }
        long long int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (temps[i] <= q && doing == true)
            {
                count++;

            }
            else if (temps[i] <= q && doing == false)
            {
                count = 1;
                doing = true;
            }
            else if (temps[i] > q && doing == true && i != n-1)
            {
                doing = false;
                gaps.push_back(count);
                count = 0;
            }
            if (i == n-1 && count >= k)
            {
                if (temps[i] <= q && doing == false) count++;
                gaps.push_back(count);
            }
        }
        long long int answer = 0;
        for (long long int i = 0; i < gaps.size(); i++)
        {

            long long int a = gaps[i];
            answer+=ans(a, k);
        }
        cout << answer << endl;
    }

}