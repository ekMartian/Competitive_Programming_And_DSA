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
        int small = 1;
        int large = n;
        int begin = 0;
        int end = n-1;
        bool is = false;
        while (begin < end)
        {
            int a = arr[begin];
            int b = arr[end];
            if (a != small && a != large && b != small && b != large)
            {
                cout << begin+1 << " " << end+1 << endl;
                is = true;
                break;
            }
            else
            {
                if (a == small)
                {
                    small++;
                    begin++;
                }
                else if (a == large)
                {
                    large--;
                    begin++;
                }
                if (b == large)
                {
                    large--;
                    end--;
                }
                else if (b == small)
                {
                    small++;
                    end--;
                }
            }
            
        }
        if (is == false)
        {
            cout << -1 << endl;
        }
    }
}