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
        vector <pair<int, int>> times;
        

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            times.push_back({a, i});

        }
        sort(times.begin(), times.end());
        reverse(times.begin(), times.end());
        int m = n+1;
        vector <pair<int, int>> ans;
        if ((m&1) != 0)
        {
            int pointerone = m/2+1;
            int pointertwo = m/2-1;
            bool flag = true;
            // vector <pair<int, int>> ans;
            ans.push_back({m/2, -1});

            // cout << m/2 << " ";
            for (int i = 0; i < n; i++)
            {
                if (flag == true)
                {
                    ans.push_back({pointerone, times[i].second});
                    // cout << pointerone;
                    pointerone++;
                    flag = false;
                }
                else if (flag == true)
                {
                    ans.push_back({pointertwo, times[i].second});
                    // cout << pointerone;
                    pointertwo--;
                    flag = true;
                }


            }
        // }
        } 
        else 
        {
            int pointerone = m/2+1;
            int pointertwo = m/2-1;
            bool flag = true;
            // vector <pair<int, int>> ans;
            ans.push_back({m/2, -1});

            // cout << m/2 << " ";
            for (int i = 0; i < n; i++)
            {
                if (flag == true)
                {
                    ans.push_back({pointerone, times[i].second});
                    // cout << pointerone;
                    pointerone++;
                    flag = false;
                }
                else if (flag == true)
                {
                    ans.push_back({pointertwo, times[i].second});
                    // cout << pointerone;
                    pointertwo--;
                    flag = true;
                }


            }
        // }
        } 
        vector <pair<int, int>> actualans;
        for (int i = 0; i < n+1; i++)
        {
            actualans.push_back({ans[i].second, ans[i].first});
        }
        sort(actualans.begin(), actualans.end());
        for (int i = 0; i < n+1; i++)
        {
            cout << actualans[i].second << " ";
        }
        cout << endl;
        // for (int i = 0; i < n; i++)
        // {
            
        // }
        // {


        // }
    }
}