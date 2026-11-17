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
        int m;
        cin >> m;
      //  cout << "started" << endl;
        vector <long long int> arr;
        vector <long long int> bs;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back(a);
        }
        for (int i = 0; i < m; i++)
        {
            long long int a;
            cin >> a;
            bs.push_back(a);
        }
        //cout << "now" << endl;
        vector <long long int> pref;
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=arr[i];
            pref.push_back(sum);
        }
        long long int ans = 0;
        sort(bs.begin(), bs.end());
        //cout << "here" << endl;
        for (int i = 1; i < m; i++)
        {
            ans+=abs(pref[bs[i]-1] = pref[bs[i-1]-1]);
        }
        ans+=abs(pref[bs[0]-1]);
        if (bs[m-1]-1 != n-1)
        {
            ans+=(pref[n-1] - pref[bs[m-1] - 1]);
        }
        cout << ans << endl;
    }
}