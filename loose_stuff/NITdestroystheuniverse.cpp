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
        vector <int> numbers;
        vector <int> zeroarray;
        int count = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            numbers.push_back(a);
            // if (a == 0 && i != 0)
            // {
            //     zeroarray.push_back(i);
            //     count++;
            // }
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (numbers[i] != 0 && flag == false)
            {
                flag = true;
                count++;

            }
            else if (numbers[i] != 0 && flag == true)
            {
                flag = true;
                continue;
            }
            else if (numbers[i] == 0 && flag == false)
            {
                flag = false;
                continue;
            }
            else if (numbers[i] == 0 && flag == true)
            {
                flag = false;
                continue;
            }
        }
        // for (int i = 1; i < count; i++)
        // {

        //     if (zeroarray[i] - zeroarray[i-1] != 1)
        //     {
        //         ans++;
        //     }

        // }
        // cout << ans << endl;
        // int i = 0; 
        // while (zeroarray[i] != NULL)
        // {

        // }
        if (count >= 2)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
}