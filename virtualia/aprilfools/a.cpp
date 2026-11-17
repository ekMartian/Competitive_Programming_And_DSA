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
        set <int> storer;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
            if(storer.find(a) != storer.end())
            {
                cout << -1 << endl;
                flag = false;
            }
            else
            {
                storer.insert(a);
            }
        }
        if (flag == false)
        {
            continue;
        }
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";

        }
        cout << endl;
    }
}