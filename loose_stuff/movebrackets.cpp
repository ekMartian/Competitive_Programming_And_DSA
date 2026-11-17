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
        string arr;
        cin >> arr;
        // vector <char> arr;
    //     for (int i = 0; i < n; i++)
    //     {
    //         char a;
    //         cin >> a;
    //         arr.push_back(a);
    //    }
       int count = 0;
       int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == '(')
            {
                count--;

            }
            else if (arr[i] == ')')
            {
                count++;
            }
            if (count > 0)
            {
                ans++;
                count = 0;
            }
        }
        cout << ans << endl;
    }
}