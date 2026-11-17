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
        for (int i = 0; i < 2*n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        map <int, int> counts;
        for (int i = 0; i < 2*n; i++)
        {
            int a;
            a = arr[i];
            if (counts.find(a) == counts.end())
            {
                counts.insert({a, 1});
            }
            else
            {
                counts[a]++;
            }
        }
        int ans = 0;
        int fours = 0;
        for (auto x : counts)
        {
            int number = x.first;
            int count = x.second;
            if (count % 2 == 1)
            {
                ans++;
            }
            else if (count % 2 == 0)
            {
                ans+=2;

            }
            // else if (count == 3)
            // {
            //     ans+=1;
            // }
            if (count  == 4)
            {
                fours++;

            }
            

        }
        cout << ans - 2*(fours%2) << endl;
    }
}