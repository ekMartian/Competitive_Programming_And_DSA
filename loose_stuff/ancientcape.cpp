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
        vector <int> proc;
        vector <int> ans;
        for (int i = 0; i < n; i++)
        {
            proc.push_back(arr[i] -1);
        }
        bool flag = true;
        
        if (n == 1)
        {
            cout << 2 << endl;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (abs(proc[i] - proc[i-1]) >= 2)
                {
                    flag = false;
                    cout << 0 << endl;
                    break;
                }
                // {}
            }
            if (flag == true)
            {
                int count = 0;
                int answer = 0;
                ans.push_back(1);
                for (int i = 1; i < n; i++)
                {
                    if (proc[i] == proc[i-1])
                    {
                        ans.push_back(1-ans[i-1]);

                    }
                    else if (abs(proc[i] - proc[i-1]) == 1)
                    {
                        ans.push_back(ans[i-1]);
                    }
                    // else if (abs(proc[i] - proc[i-1]) >= 2)
                    // {
                    //     cout << 0 << endl;
                    //     break;
                    // }
                    // {
                    //     ans.push
                    // }


                }
                int tomatch = proc[0];
                for (int i = 1; i < n; i++)
                {
                    if (ans[i] == 1)
                    {
                        count++;
                    }
                }
                if (count == tomatch)
                {
                    answer++;
                }
                
                ans[0] = 0;
                for (int i = 1; i < n; i++)
                {
                    if (proc[i] == proc[i-1])
                    {
                        ans[i] = (1-ans[i-1]);

                    }
                    else if (abs(proc[i] - proc[i-1]) == 1)
                    {
                        ans[i] = (ans[i-1]);
                    }
                    // else if (abs(proc[i] - proc[i-1]) >= 2)
                    // {
                    //     cout << 0 << endl;
                    //     break;
                    // }
                    // {
                    //     ans.push
                    // }


                }
                tomatch = proc[0];
                count = 0;
                for (int i = 1; i < n; i++)
                {
                    if (ans[i] == 1)
                    {
                        count++;
                    }
                }
                if (count == tomatch)
                {
                    answer++;
                }
                cout << answer << endl;

            }
            

        }


    }
}