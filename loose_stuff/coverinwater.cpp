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
        int count = 0;
        int totalcount = 0;
        int maximum = 0;
        bool checker = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.' && checker == true)
            {
                count++;
                totalcount++;

            }
            else if (s[i] == '.' && checker == false)
            {
                checker = true;
                totalcount++;
                count = 1;
            }
            else if (s[i] == '#')
            {
                count = 0;
            }
            maximum = max(maximum, count);

        }
        if (maximum >= 3)
        {
            cout << 2 << endl;
        }
        else
        {{
            cout << totalcount << endl;
        }}
    }
}