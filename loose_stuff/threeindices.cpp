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
        bool flag = false;
        vector <int> arr;
        vector <int> ans;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        for (int i = 1; i < n-1; i++)
        {
            if (arr[i] > arr[i-1] && arr[i] > arr[i+1])
            {
                flag = true;
                ans.push_back(i-1); 
                ans.push_back(i);
                ans.push_back(i+1);
            }
                
            else continue;

        }
        if (flag == true)
        {
            cout << "YES" << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << ans[i]+1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}