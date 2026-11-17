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
        int count = 0;
        bool flag = true;
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] > arr[i+1] && count == 0)
            {
                count++;
            }
            else if (arr[i] > arr[i+1] && count == 1)
            {
                flag = false;
            }   
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    

}