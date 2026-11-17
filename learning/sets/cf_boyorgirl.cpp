#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set <char> chars;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (chars.count(c) == 1)
        {
            continue;
        }
        else
        {
            chars.insert(c);
            count++;
        }
    }
    if ((count & 1) == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}