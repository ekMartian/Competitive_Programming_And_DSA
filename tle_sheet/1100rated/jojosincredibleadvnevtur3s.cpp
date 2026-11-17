// for anohter quesiton (one previosluy solved, but look at this :- ) ready every single sentence of the problem. ALWAYS. 

#include <bits/stdc++.h>
using namespace std;
// using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a = 0;
        int b = 1;
        bool at = true;
        string s;
        cin >> s;
        // s = s + s;
        int n = s.size();
        bool todo = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                todo = true;
                break;
            }
        }

        int i = 0;
        if (s[n-1] == '1' && todo == true)
        {
            while (s[i] == '1')
            {
                s = s + '1';
                i++;
                n++;
            }
        }
        if (todo == false)
        {
            cout << n*n << endl;
            continue;
        }
        // cout << s << endl;
        int longest = 0;
        bool doing = false;
        int current = 0;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if (c == '1' && doing == false)
            {
                current = 1;
                doing = true;
                longest = max(longest, current);
            }
            else if (c == '1' && doing == true)
            {
                current++;
                longest = max(longest, current);
            }
            else if (c == '0')
            {
                doing = false;
            }
        }
        for (int i = 0; i < longest; i++)
        {
            if (at == true)
            {
                a++;
                at = false;
            }
            else
            {
                b++;
                at = true;
            }
        }
        // cout << "longest = " << longest << endl;
        // cout << "a = " << a << ", b = " << b << endl;
        cout << a * b << endl;

    }
}