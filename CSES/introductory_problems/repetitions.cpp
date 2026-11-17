#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    // cin >> n;
    string s;
    cin >> s;
    n = s.size();
    int longest = 1;
    int current = 1;
    int doing = true;
    char ref = s[0];
    for (int i = 1; i < n; i++)
    {
        char c = s[i];
        if (c == ref)
        {
            current++;
            longest = max(longest, current);


        }
        else if (c != ref)
        {
            doing = false;
            longest = max(longest, current);
            current = 1;
            ref = c;

        }
    }
    cout << longest << endl;
}