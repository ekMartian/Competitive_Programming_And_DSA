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
        vector <int> arr;
        map <int, int> tracker;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
            if (tracker.find(a) == tracker.end())
            {
                tracker.insert({a, 1});
            }
            else
            {
                tracker[a]++;
            }
        }
        bool even = true;
        for (auto it = tracker.begin(); it != tracker.end(); it++)
        {
            int a = it->first;
            int count = it->second;
            if ((count & 1) == 1)
            {
                even = false;
                break;
            }
        }
        if (even == false)
        {
            cout << -1 << '\n';
        }
        else
        {
            map <int, vector<int>> positions;
            for (auto it = tracker.begin(); it != tracker.end(); it++)
            {
                positions.insert({it->first, vector <int>(it->second)});
            } 
            
        }
        

        
    }
}

//read the quesiortn, dont jukp to a concludison just to strt solving

