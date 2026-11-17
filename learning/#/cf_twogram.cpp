#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map <string, int> m;
    for (int i = 1; i < n; i++)
    {
        char a = s[i-1];
        char b = s[i];
        string here = s.substr(i-1, 2);
        if (m.find(here) != m.end())
        {
            m[here]+=1;
        }
        else
        {
            m.insert({here, 1});
        }

        
        
        // string here = s[i]

    }
    int maximum = 0;
    for (auto& p : m)
    {
        maximum = max(p.second, maximum);
    }
    for(auto& p : m)
    {
        if (p.second == maximum)
        {
            cout << p.first << endl;
            break;

        }
        else
        {
            continue;
        }
    }
    // cout << maximum << endl;
}

//mappenburmen, understandeneru detailer. 
// understand in detail, all this stuff, ask mamma papa for help, or me. 