#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map <int, string> m1 = {{1, "hi"}, {2, "there"}, {3, "person"}};
    map <int, string> m2 = {{1, "Geeks"}, {2, "For"}, {3, "Geeks"}};
    for (auto& p : m2)
    {
        cout << p.first << " " << p.second << endl;
        
    }
    for (auto& p : m1)
    {
        cout << p.first << " " << p.second << endl;
        
    }


    // int n = 8;
    // auto it = m1.find(2);
    // auto itt = m1.find(3);
    // vector <char> cha;
    // for (i : 0 : n)
    // for (auto& i : cha)

    return 0;
}