#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        int counta = 0;
        int countb = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '<')
            {
                counta++;
            }
            else
            {
                countb++;
            }
        }
        int maximum = counta;
        if (counta != countb)
        {
            maximum = max(counta, countb);
        }
        // int maximum = max(counta, countb);
        // if (min(counta, countb))
        if (maximum = counta)
        {
            char tocheck = '>';
            int ans = counta + 1;
            if(s[0] == tocheck)
            {
                ans--;
                countb--;
            }
            else if (s[l-1] == tocheck)
            {
                ans--;
                countb--
            }
            ans-=(countb*2);
        }
    }
}