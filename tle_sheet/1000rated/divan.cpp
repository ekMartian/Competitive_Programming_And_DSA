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
        vector <pair<long long int, long long int>> arr;
        for (long long int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back({a, i});
        }
        // vector <int> ans;
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        bool doing = true;
        int hq = 0;
        long long int dist = 0;
        long long int j = 1; long long int k = -1;
        for (int i = 0; i < n; i++)
        {
            if (doing == true)
            {
                long long int here = abs(j-hq) * arr[i].first;
                dist+=(2*here);
                arr[i].first = j;
                j++;
                doing = false;
            }
            else
            {
                long long int here = abs(k-hq) * arr[i].first;
                dist+=(2*here);
                arr[i].first = k;
                k--;
                doing = true;
            }



        }
        // long long int increment = 1 - k;
        // for (int i = 0; i < n; i++)
        // {
        //     arr[i].first+=increment;
        // }
        for (int i = 0; i < n; i++)
        {
            long long int temp = arr[i].first;
            arr[i].first = arr[i].second;
            arr[i].second = temp;
        }
        sort(arr.begin(), arr.end());
        cout << dist << endl;
        cout << hq << " ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i].second << " ";
        }
        cout << endl;



    }
}