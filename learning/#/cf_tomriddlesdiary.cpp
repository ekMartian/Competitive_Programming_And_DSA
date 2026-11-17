#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map <string, bool> um;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (um.find(s) != um.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            um.insert({s, true});
        }
        // if (um.find() != )
        // um.insert({i, "s"});
        // auto it = um.find(i);
        // if (it == )
        // if (um.find(i) == i)

    }
}