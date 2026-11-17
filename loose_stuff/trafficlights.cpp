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
        char c;
        cin >> c;
        string s;
        cin >> s;
        s = s + s;
        
        // int ans = 0;
        if (c == 'g')
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = 0;
            bool flag = false;
            int counter = 0;
            for (int i = 0; i < 2*n; i++)
            {
                if (flag == false && s[i] == c)
                {
                    flag = true;
                    counter = 0;
                }
                else if (flag == true && s[i] == 'g')
                {
                    counter++;
                    ans = max(counter, ans);
                    flag = false;
                    counter = 0;


                }
                else if (flag == true && s[i] != 'g')
                {
                    counter++;
                }

            }
            cout << ans << endl;
        }
    }
}

// if, else if
// if, if
// which if block tdoes the else if block connect to? recent one. (the immediate last one), (the imediate preeding one, that is)