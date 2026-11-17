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
        char current = s[0];
        int count = 1;
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == current)
            {
                flag = true;
            }
            else
            {
                current = s[i];
                count++;
            }
        }
        if (s[0] == s[n-1])
        {
            cout << count << endl;
        }
        else if (flag == true && s[0] != s[n-1])
        {
            cout << count+1 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
}