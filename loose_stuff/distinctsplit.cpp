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
        bool flag = false;
        int a = 1;
        int b = 0;
        sort(s.begin(), s.end());
        // {
            
        // }
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i-1] && flag == false)
            {
                b++;
                flag = true;

            }
            else if (s[i] == s[i-1] && flag == true)
            {
                continue;
            }
            else if (s[i] != s[i-1])
            {
                a++;
                flag = false;
            }

        }
        cout << a+b << endl;
    }
}