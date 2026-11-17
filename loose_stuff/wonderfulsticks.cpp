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
        string s;
        cin >> s;
        vector <int> nums;
        for (int i = 0; i < n; i++)
        {
            nums.push_back(i+1);
        }
        // for (int i = 0; i < n-1; i++)
        // {
        //     if (s[i] == '<')
        //     {
        //         s[i] = '>';
        //     }
        //     else
        //     {
        //         s[i]  = '<';
        //     }
        // }
        vector <int> ans;
        int first = 0;
        int last = n-1;
        for (int i = n-2; i >= 0; i--)
        {
            if (s[i] == '<')
            {
                ans.push_back(nums[first]);
                first++;


            }
            else
            {
                ans.push_back(nums[last]);
                last--;
            }

        }
        ans.push_back(nums[first]);
        reverse(ans.begin(), ans.end());
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}