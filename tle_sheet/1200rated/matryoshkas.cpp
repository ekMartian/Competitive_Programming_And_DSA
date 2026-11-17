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
        vector <vector <int>> nonconsecs;
        sort(arr.begin(), arr.end());
        vector <int> group;
        group.push_back(arr[0]);
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i-1] <= 1)
            {
                group.push_back(arr[i]);
            }
            else
            {
                nonconsecs.push_back(group);
                group.clear();
                group.push_back(arr[i]);

            }
        }
        if (group.size() > 0)
        {
            nonconsecs.push_back(group);
        }
        int total = 0;
        cout << "nonconsecs size is " << nonconsecs.size() << endl;
        for (int i = 0; i < nonconsecs.size(); i++)
        {
            vector <int> here = nonconsecs[i];
            int maximum = 1;
            int current = here[0];
            int now = 1;
            cout << "this group is ";
            for (int j = 0; j < here.size(); j++)
            {
                cout << here[j] << " ";
            }
            cout << endl;
        
            for (int j = 1; j < here.size(); j++)
            {
                if (here[j] == current)
                {
                    now++;
                    maximum = max(maximum, now);
                }
                else
                {
                    now = 1;
                    current = here[j];
                }
            }
            total+=maximum;
        }
        cout << total << endl;
    }
}