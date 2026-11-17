#include <bits/stdc++.h>
using namespace std;

int main()
{
    //,ylifebelke 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> arr;
        int maximum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
            maximum = max(maximum, a);
        }
        cout << maximum << endl;
    }
}