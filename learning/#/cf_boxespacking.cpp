#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // vector <int> sizes;
    map <int, int> m;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (m.find(a) != m.end())
        {
            m[a]++;
            // m.insert({a, 1});
        }
        else
        {
            m.insert({a, 1});
        }
        // sizes.push_back(a);

    }
    int maximum = 0;
    for (auto& p : m)
    {
        maximum = max(maximum, p.second);

    }
    cout << maximum << endl;
    // sort(sizes.begin(), sizes.end());
    // reverse(sizes.begin(), sizes.end());
    // int visible = 0;
    // int count = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (boxes[i] == boxes[i-1])
    //     {

    //     }


    // }



}