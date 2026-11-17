#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map <char, int> left;
        map <char, int> right;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if (right.find(c) == right.end())
            {
                right.insert({c, 1});
            }
            else
            {
                right[c]++;
            }
            // right.insert(c);
        }
        int value = left.size() + right.size();
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if (right[c] == 1)
            {
                right.erase(c);
            }
            else
            {
                right[c]--;
            }
            if (left.find(c) == left.end())
            {
                left.insert({c, 1});
            }
            else
            {
                left[c]++;
            }
            if (value < left.size() + right.size())
            {
                value = left.size() + right.size();
            }
            // value = max(value, left.size() + right.size());

        }
        cout << value << endl;

    }
}