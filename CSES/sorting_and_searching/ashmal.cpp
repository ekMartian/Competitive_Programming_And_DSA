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
        // cin >> s;
        s = "";
        vector <string> ais;
        for (int i = 0; i < n; i++)
        {
            string a;
            cin >> a;
            ais.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            string a = ais[i];
            string x = a + s;
            string y = s + a;
            if (x <= y)
            {
                s = x;
            }
            else
            {
                s = y;
            }
            // if (a <= s)
            // {
            //     s = a + s;
            // }
            // else
            // {
            //     s = s + a;
            // }
        }
        cout << s << endl;
    
    }
}