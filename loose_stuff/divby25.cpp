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
        bool twentyfive = false;
        bool zerozero = false;
        bool seventyfive = false;
        bool fifty = false;
        bool zero = false;
        bool five = false;
        int x = INT_MAX;
        int y = INT_MAX;
        int z = INT_MAX;
        int w = INT_MAX;
        // , y, z, w;
        for (int i = l-1; i >= 0; i--)
        {
            if (s[i] == '0' && zero == false)
            {
                zero = true;
            }
            if (s[i] == '5' && five == false)
            {
                five = true;
            }
            else if (s[i] == '0' && zero == true)
            {
                zerozero = true;
            }
            if (s[i] == '5' && zero == true)
            {
                fifty = true;
            }
            if (s[i] == '7' && five == true)
            {
                seventyfive = true;
            }
            if (s[i] == '2' && five == true)
            {
                twentyfive = true;
            }
        }
        if (zerozero == true)
        {
            int i = l-1;
            int a = 0;
            int b = 0;
            while(s[i] != '0')
            {
                i--;

            }
            b = i;
            i--;
            while(s[i] != '0')
            {
                i--;
            }
            a = i;
            x = (b-a-1) + (l-b - 1);
            // cout << (b-a-1) + (l-b - 1) << endl;
        }
        if (fifty == true)
        {
            int i = l-1;
            int a = 0;
            int b = 0;
            while(s[i] != '0')
            {
                i--;

            }
            b = i;
            i--;
            while(s[i] != '5')
            {
                i--;
            }
            a = i;
            y = (b-a-1) + (l-b - 1);
            // cout << (b-a-1) + (l-b - 1) << endl;
        }
        if (twentyfive == true)
        {
            int i = l-1;
            int a = 0;
            int b = 0;
            while(s[i] != '5')
            {
                i--;

            }
            b = i;
            i--;
            while(s[i] != '2')
            {
                i--;
            }
            a = i;
            z = (b-a-1) + (l-b - 1);
            // cout << (b-a-1) + (l-b - 1) << endl;
        }
        if (seventyfive == true)
        {
            int i = l-1;
            int a = 0;
            int b = 0;
            while(s[i] != '5')
            {
                i--;

            }
            b = i;
            i--;
            while(s[i] != '7')
            {
                i--;
            }
            a = i;
            w = (b-a-1) + (l-b - 1);
            // cout << (b-a-1) + (l-b - 1) << endl;
        }
        int stepone = min(x, y);
        int steptwo = min(z, w);
        cout << min(stepone, steptwo) << endl;
    }
}