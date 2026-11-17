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
        int minimum = INT_MAX;
        int secondminimum = INT_MAX;
        int maximum = INT_MIN;
        int secondmaximum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            minimum = min(minimum, arr[i]);
            maximum = max(maximum, arr[i]);

        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= secondminimum && arr[i] > minimum)
            {
                secondminimum = arr[i];
            }
            if (arr[i] >= secondmaximum && arr[i] < maximum)
            {
                secondmaximum = arr[i];
            }
        }
        bool flag = false;
        bool glag = false;
        bool dlag = false;
        int index;
        if ((arr[0] == minimum && arr[n-1] == maximum) || (arr[0] == maximum && arr[n-1] == minimum))
        {
            cout << maximum - minimum << endl;
        }
        else if (arr[0] == minimum || arr[n-1] == maximum)
        {
            cout << maximum - minimum << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                // if (flag == false && arr[i] == minimum)
                // {
                //     flag = true;
                //     index = i;
                // }
                if (glag == false && arr[i] == maximum)
                {
                    glag = true;
                    index = i;
                }
                if (index < n-1)
                {
                    // if (flag == true && arr[index+1] == maximum)
                    // {
                    //     cout << maximum - minimum << endl;
                    //     dlag = true;
                    //     break;
                    // }
                    // else if (flag == true)
                    // {
                    //     flag = false;
                    //     continue;
                    
                    if (glag == true && arr[index+1] == minimum)
                    {
                        cout << maximum - minimum << endl;
                        dlag = true;
                        break;
                    }
                    else if (glag == true)
                    {
                        glag = false;
                        continue;
                    }

                }
                
                // {

                // }
            }
            if (dlag == false)
            {
                int ans = max((maximum - arr[0]), (arr[n-1] - minimum));
                cout << ans << endl;

            }

        }
        
    }
}