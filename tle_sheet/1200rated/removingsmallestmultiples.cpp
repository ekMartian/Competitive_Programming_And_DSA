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
        vector <long long int> t;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                t.push_back(i+1);
            }
        }
        set <long long int> tset;
        for (int i = 0; i < t.size(); i++)
        {
            tset.insert(t[i]);
        }
        vector <vector<long long int>> numbers;
        vector <long long int> at(t.size(), 0);
        for (int i = 0; i < t.size(); i++)
        {
            long long int number = t[i];
            vector <long long int> here;
            long long int now = number;
            while (now <= n)
            {
                here.push_back(now);
                now = now + number;
            }
            numbers.push_back(here);
        }
        long long int cost = 0;
        for (int i = 0; i < numbers.size(); i++)
        {
            vector <long long int> here = numbers[i];
            for (int j = 0; j < here.size(); j++)
            {
                long long int a = here[j];
                if (tset.find(a) != tset.end())
                {
                    cost+=here[0];
                    tset.erase(a);
                }
                else
                {
                    break;
                }
            }
        }
        cout << cost << endl;
    }
}