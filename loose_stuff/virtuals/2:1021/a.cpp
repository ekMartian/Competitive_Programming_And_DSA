#include <bits/stdc++.h>
using namespace std;
//scicommatteaurri
//renthe di senthe
//divventwoer
//comingenburmen
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 10;
        string s;
        cin >> s;
        vector <int> ans (n, 0);
        // string ans = "0000000000";
        sort(s.begin(), s.end());
        for (int i = 0; i < n; i++)
        {
            int req = 9 - i;
            // int req = '9' - static_cast<char>(i);
            // cout << req << endl;
            for (int j = 0; j < n; j++)
            {
                // cout << s[i] << " " << req << endl;
                if (((s[j]) - ('0')) >= req)
                {
                    ans[i] = (s[j]) - ('0');
                    s[j] = '/';
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i];
        }
        cout << endl;
        // cout << ans << endl;
        

    }
}