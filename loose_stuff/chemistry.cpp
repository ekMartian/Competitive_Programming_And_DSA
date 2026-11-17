#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int paircount = 0;
    int solocount = 0;
    // bool pair = false;
    for (int i = 1; i < n-1; i++)
    {
        if (s[i] == s[i-1])
        {
            paircount++;
            i++;
        }
        else
        {
            solocount++;
        }
    }
}