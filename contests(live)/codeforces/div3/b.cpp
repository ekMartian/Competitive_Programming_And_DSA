#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector <long long int> arr;
        long long int remaining = 0;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back(a);
        }
        bool flag = true;
        for (int i = 0; i < n-1; i++)
        {
            long long int a = arr[i];
            a = a + remaining;
            if (a >= i+1)
            {
                remaining = a - (i+1);
                arr[i] = i+1;
            }
            else
            {
                flag = false;
                break;
            }
        }
        arr[n-1] = arr[n-1]+ remaining;
        if (arr[n-2] >= arr[n-1])
        {
            flag = false;
        }
        if (flag == false)
        {
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
        
    }
}