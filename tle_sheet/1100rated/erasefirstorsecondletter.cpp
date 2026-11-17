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
        sort(s.begin(), s.end());
        int distincts = 1;
        vector <int> occurences;
        // bool flag = false;
        char current = s[0];
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            // if (flag == false)
            // {
            //     current = s[i];
            //     flag = true;
            //     count = 1;

            // }
            if (s[i] == current)
            {
                count++;



            }
            else if (s[i] != current)
            {
                // count = 1;
                current = s[i];
                // flag = false;
                occurences.push_back(count);
                count = 1;
            }
            if (i == n-1)
            {
                occurences.push_back(count);
            }

        }
        int solo = 0;
        for (int i = 0; i < occurences.size(); i++)
        {
            if (occurences[i] == 1)
            {
                solo++;
            }

        }
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[i-1])
            {
                distincts++;
            }


        }
        cout << distincts << " " << solo << endl;
        cout << pow(2, distincts) - solo << endl;

    }
}