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
        string st;
        cin >> st;
        int maximum = 0;
        int current = 0;
        bool doing  = false;
        for (int i = 0; i < n; i++)
        {
            if (doing == true && st[i] == '#')
            {
                current++;
                maximum = max(maximum, current);
            }
            else if (doing == true && st[i] == '*')
            {
                current = 0;
                doing = false;
            }
            else if (doing == false && st[i] == '#')
            {
                current = 1;
                maximum = max(current, maximum);
                doing = true;
            }
            else
            {
                continue;
            }
        }
        
        cout << (maximum+1)/2 << endl;
    }
}