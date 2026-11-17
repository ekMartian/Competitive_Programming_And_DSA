#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    //cout << 0000 << endl;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector <long long int> arr;
        long long int m;
        cin >> m;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back(a);
        }
        vector <long long int> bs;
        for (int i = 0; i < m; i++)
        {
            long long int a;
            cin >> a;
            bs.push_back(a);
        }
        vector <long long int> pref;
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=arr[i];
            pref.push_back(sum);
        }
        sort(bs.begin(), bs.end());
        reverse(bs.begin(), bs.end());
        vector <long long int> sums;
        for (int i = 0; i < m-1; i++)
        {
            //cout << "entered for loop" << endl;
            long long int here = pref[bs[i]-1] - pref[bs[i+1]-1];
            sums.push_back(1LL*abs(here));
        }
        sums.push_back(1LL * abs(pref[bs[m-1] - 1]));
        long long int answer = 0;
        for (int i = 0; i < sums.size(); i++)
        {
            answer+=sums[i];
        }
        if (bs[0]-1 != n-1)
        {
            answer+=(pref[n-1]-pref[bs[0]-1]);
        } 
        cout << answer << endl;
    }
}