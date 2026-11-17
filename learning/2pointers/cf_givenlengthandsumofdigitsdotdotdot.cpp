#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, s;
    cin >> m >> s;
    if (s == 0 && m > 1)
    {
        cout << -1 << " " << -1 << endl;
    }
    else if (m*9 < s)
    {
        cout << -1 << " " << -1 << endl;
    }
    else if (s == 0 && m == 1)
    {
        cout << 0 << " " << 0 << endl;
    }
    
    else
    {
        vector <int> ans;
        vector <int> otherans;
        int balance = s;
        int countera = 0;
        while (countera < m)
        {
            if (balance >= 9)
            {
                ans.push_back(9);
                balance-=9;
            }
            else
            {
                ans.push_back(balance);
                balance-=ans[countera];
            }
            countera++;
        }
        for (int i = 0; i < m; i++)
        {
            otherans.push_back(ans[i]);

        }
        reverse(otherans.begin(), otherans.end());
        if (otherans[0] == 0)
        {
            int j = 0;
            while (otherans[j] == 0 && j < m)
            {
                j++;
            }
            otherans[j]--;
            otherans[0]++;
        }
        // countera = 0;
        // int donater = -1;
        // while (countera < m && balance >= 0)
        // {
        //     if (balance >= 9)
        //     {
        //         ans.push_back(9);
        //         balance-=9;
        //         donater = countera;
        //     }
        //     else
        //     {
        //         ans.push_back(balance);
        //         balance-=ans[countera];

        //     }
        //     countera++;
        // }
        // if (countera < m)
        // {




        // }
        for (int i = 0; i < m; i++)
        {
            cout << otherans[i];
        }
        cout << " ";
        for (int i = 0; i < m; i++)
        {
            cout << ans[i];
        }
        cout << endl;
        

        
        


    }
}

//exact wording, revamp, is hard.