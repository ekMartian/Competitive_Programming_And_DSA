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
        int count0 = 0;
        int count1 = 0;
        for(int i = 0; i < s.size(); i++)
        {

            if (s[i] == '0')
            {
                count0++;
            }
            else
            {
                count1++;
            }

        }
        int ans = min(count1, count0);
        if (ans % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }

}