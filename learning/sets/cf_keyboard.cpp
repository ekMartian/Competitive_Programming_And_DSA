#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;
    string s;
    cin >> s;
    int n = s.size();
    vector <char> letters = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
    
    if (c == 'L')
    {
        for (int i = 0; i < n; i++)
        {
            auto it = find(letters.begin(), letters.end(), s[i]);
            it++;
            cout << *it;
        }
        cout << endl;

    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            auto it = find(letters.begin(), letters.end(), s[i]);
            it--;
            cout << *it;
        }
        cout << endl;

    }
}
//find in vectors and input always such that it works thingy?
