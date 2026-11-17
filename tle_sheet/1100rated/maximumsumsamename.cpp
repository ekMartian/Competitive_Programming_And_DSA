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
        vector <int> arr;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
            sum+=a;
        }
        sort(arr.begin(), arr.end());
        vector <int> sums;
        int l = 0;
        for (int i = 0; i+1 < n; i++)
        {
            int sumhere = arr[i];
            i++;
            sumhere+=arr[i];
            sums.push_back(sumhere);
            l++;


        }
        int at = 0;
        int i = n-1;
        for (int j = 0; j < k; j++)
        {
            if (at < l && sums[at] < arr[i])
            {
                sum-=sums[at];
                at++;


            }
            else
            {
                sum-=arr[i];
                i--;
            }
        }
        cout << sum << endl;
    }
}