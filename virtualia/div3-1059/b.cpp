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
        int k = 0;
        vector <int> pos;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                k++;
                pos.push_back(i+1);
            }
        }
        cout << k << endl;
        for (int i = 0; i < k; i++)
        {
            cout << pos[i] << " ";
        }
        cout << endl;

    }
}