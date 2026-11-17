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
        map <int, int> done;
        vector <int> god;
        for (int i = 0; i < n; i++)
        {
            if (done.find(arr[i]) == done.end())
            {
                done.insert({arr[i], 1});
                god.push_back(arr[i]);
            }
            else
            {
                done[arr[i]]++;
            }
        }        

    }
}