#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int l = s.length();
        int zerocount = 0;
        int onecount = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '0')
            {
                zerocount++;
            }
            else
            {
                onecount++;
            }
        }
        if (onecount == zerocount)
        {
            cout << 0 << endl;
        }
        else 
        {
            // int i = 0;
        // while (i < l)
        int j;
        for (int i = 0; i < l; i++)
        {
            
            if (s[i] == '0' && onecount > 0)
            {
                onecount--;
                continue;
                // i++;
            }
            else if (s[i] == '0' && onecount == 0)
            {
                cout << l - i << endl;
                // i++;
                break;
            }
            else if (s[i] == '1' && zerocount > 0)
            {
                zerocount--;
                continue;
                // i++;
            }
            else if (s[i] == '1' && zerocount == 0)
            {
                cout << l - i << endl;
                // i++;
                break;
            }
            // cout << 0 << endl;
        }

        }
        
        // cout << l - i << endl;
    }
//  int t;
//  cin >> t;

}