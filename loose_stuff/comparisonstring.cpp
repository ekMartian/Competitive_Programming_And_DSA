#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        string s;
        cin >> s;
        // // int l = s.length();
        // int checker = s[0];
        int maximum = 1;
        int counter = 1;
        for (int i = 1; i < l; i++)
        {

            if (s[i] == s[i-1])
            {
                counter++;
            }
            else
            {
                counter = 1;
                // checker = s[i];
            }
            maximum = max(maximum, counter);
        }
        cout << maximum + 1 << endl;
    }
}