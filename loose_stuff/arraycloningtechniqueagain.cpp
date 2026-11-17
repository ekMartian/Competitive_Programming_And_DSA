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
        for (int i =0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        int maximum = 0;
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i-1])
            {
                count++;
                maximum = max(maximum, count);
            }
            // else if (arr[i] == arr[i-1] && flag == false;)
            // {
            //     count = 1;
            // }
            else
            {
                count = 1;
                maximum  = max(maximum, count);
            }

        }
        if (maximum == 1)
        {
            int count = 1;
            int moves = 0;
            int i = 0;
            while (count < n)
            {
                if ()
                count = count + 1;
                moves++;
                
            }

        }
        else if (maximum > 1)
        {
            
        }
    }
}