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
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        } 
        sort(arr.begin(), arr.end());
        map <int, int> counts;
        int current = arr[0];
        int count = 0;
        int maximum = 0;
        for (int i = 1; i < n; i++)
        {
            int a = arr[i];
            if (a == current)
            {
                count++;

            }
            else
            {
                current = a;
                count = 1;
            }
            if (counts.find(a) == counts.end())
            {
                counts.insert({a, count});

            }
            else
            {
                counts[a] = count;
            }
            maximum = max(count, maximum);
        }
        for ()
    }
}