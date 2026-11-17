#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        vector <long long int> arr;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        // int iterone = -1;
        // int itertwo = n;
        long long int sumpref = 0;
        vector <long long int> pref;
        // int sumsuf = 0;
        // vector <int> suff;
        for (int i =0; i < n; i++)
        {
            sumpref+=arr[i];
            pref.push_back(sumpref);
        }
        // for (int i = n-1; i >= 0; i--)
        // {
        //     sumsuf+=arr[i];
        //     suff.push_back(sumsuf);
        // }
        int atsuf = k;
        int atpref = -1;
        long long int ans = INT_MIN;
        // cout << sumpref << endl;
        for (int i = 0; i <= k; i++)
        {
            long long int sumhere = pref[n-1] - pref[n-atsuf-1];
            if (atpref >= 0)
            {

                sumhere = sumhere + pref[atpref];

            }
            // cout << sumhere << endl;
            // sumhere = sumhere + pref[atpref];
            long long int here  = sumpref - sumhere;
            ans = max(ans, here);
            atpref++;
            atpref++;
            atsuf--;
        }
        // {

        // }
        // int ans = INT_MIN;
        // for (int i = 0; i < k; i++)
        // {


        // }
        cout << ans << endl;



    }
    
}

// its not alwas the imiedige bsst wala thingy, but frame it peroprly.
// experience, i was able to figure out what the issue migh have been (kind of.)

// using ai now for help while practicing 
