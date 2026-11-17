#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set <string> s;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if (s.count(str) > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            s.insert(str);
        }
    }
}