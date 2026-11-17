#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        long long int k;
        long long int m;
        cin >> n >> k >> m;
        vector <long long int> arr;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back(a);
        }
        vector <long long int> pref;
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            // long long int
            // sum+=
            sum+=arr[i];
            pref.push_back(sum);

        }
        pair<int, int> answer = {-1, -1};
        for (int i = 0; i < n-k+1; i++)
        {
            int l = i;
            int r = l+k-1;
            long long int sum = 0;
            if (i == 0)
            {
                sum = pref[r];
                if (sum % m == 0)
                {
                    cout << "optione one" << endl;
                    answer = {l, r};
                    break;
                }
            }
            else
            {
                sum = pref[r] - pref[l-1];
                if (sum % m == 0)
                {
                    answer = {l, r};
                    break;
                }
            }

        } 
        cout << "sum is " << sum << endl;
        if (answer == std::make_pair(-1, -1)) 
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << answer.first << " " << answer.second << endl;
            cout << endl;
            for (int i = answer.first; i < answer.second; i++)
            {
                cout << "here" << endl;
                cout << arr[i] << " ";
            }
            cout << "went through loop" << endl;
            cout << endl;
        }


    }
}