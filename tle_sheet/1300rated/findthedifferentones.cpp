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
        vector <int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        vector <int> diff_next;
        diff_next.push_back(-1);
        for (int i = n-2; i >= 0; i--)
        {
            if (arr[i] != arr[i+1])
            {
                diff_next.push_back(i+1);
            }
            else
            {
                diff_next.push_back(diff_next.back());
            }
        }
        reverse(diff_next.begin(), diff_next.end());
        int q;
        cin >> q;
        vector<pair<int,int>> queries;
        for (int i = 0; i < q; i++)
        {
            int a, b;
            cin >> a >> b;
            queries.push_back({a, b});
        }
        for (int i = 0; i < q; i++)
        {
            int a = queries[i].first;
            int b = queries[i].second;
            if (a + 1 == b)
            {
                if (arr[a-1] == arr[b-1])
                {
                    cout << -1 << " " << -1 << endl;
                }
                else
                {
                    cout << a << " " << b << endl;
                }
            }
            else
            {
                if (arr[a-1] != arr[b-1])
                {
                    cout << a << " " << b << endl;
                }
                else
                {
                    if (diff_next[a-1] != -1 && diff_next[a-1] < b)
                    {
                        cout << a << " " << diff_next[a-1]+1 << endl;
                    }
                    else
                    {
                        cout << -1 << " " << -1 << endl;
                    }
                }
            }
        }

    }
}