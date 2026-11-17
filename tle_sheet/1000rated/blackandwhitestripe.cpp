#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector <char> status;
        for (int i = 0; i < n; i++)
        {
            char c;
            c = s[i];
            status.push_back(c);
        }
        vector <int> counts;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (status[i] == 'B')
            {
                count++;
                
            }
            counts.push_back(count);
        }
        int minimum = INT_MAX;
        for(int i = 0; i <= n-k; i++)
        {
            int here = counts[i+k-1] - counts[i];
            if (status[i] == 'B')
            {
                here++;
            }
            minimum = min(minimum, k-here);


        }
        cout << minimum << endl;
        // int counts;

    }
}