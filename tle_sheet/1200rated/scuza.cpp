#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, q;
        cin >> n >> q;
        vector <long long int> arra;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arra.push_back(a);
        }
        vector <pair<long long int, long long int>> arrb;
        for (long long int i = 0; i < q; i++)
        {
            long long int a;
            cin >> a;
            arrb.push_back({a, i});
        }
        sort(arra.begin(), arra.end());
        sort(arrb.begin(), arrb.end());
        vector <pair<long long int, char>> arr;
        for (int i = 0; i < n; i++)
        {
            arr.push_back({arra[i], 'n'});
        }
        for (int i = 0; i < q; i++)
        {
            arr.push_back({arrb[i].first, 'q'});
        }
        sort(arr.begin(), arr.end());
        map <long long int, long long int> ans;
        long long int count = 0;
        for (int i = 0; i < n+q; i++)
        {
            if (arr[i].second == 'n')
            {
                count+=arr[i].first;
            }
            else
            {
                ans.insert({arr[i].first, count});
            }
        }
        vector <long long int> final;
        for (int i = 0; i < q; i++)
        {
            long long int a = arrb[i].first;
            arrb[i].first = arrb[i].second;
            arrb[i].second = a;
        }
        sort(arrb.begin(), arrb.end());
        for (int i = 0; i < q; i++)
        {
            final.push_back(ans[arrb[i].second]);
        }
        for (int i = 0; i < q; i++)
        {
            cout << final[i] << " ";
        }
        cout << endl;

    }
}