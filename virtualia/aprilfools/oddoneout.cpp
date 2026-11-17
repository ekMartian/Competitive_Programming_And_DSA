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
        vector <bool> arr(n, false);
        arr[0] = true;
        int at = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[at] == 'R')
            {
                at++;
                arr[at] = true;

            }
            else
            {
                at--;
                arr[at] = true;
            }


        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == true)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}