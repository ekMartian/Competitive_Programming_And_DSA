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
        vector<int>differentright(26, 0);
        vector<int>differentleft(26, 0);
        for (int i = 0; i < n; i++)
        {
            char consi = s[i];
            differentleft[s[i] - 'a']++;
        }
        int ans = 0;
        int at = n-1;
        for(int i = 0; i < n; i++)
        {
            at--;
            

        }
        {

        }
    }
}