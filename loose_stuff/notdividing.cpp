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
        for(int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                arr[i]++;
            }
            
            if (i > 0)
            {
                while (arr[i] % arr[i-1] == 0)
                {
                    arr[i]++;
                }

            }
            
            
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}