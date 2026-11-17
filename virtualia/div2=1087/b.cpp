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

        vector <int> rev;
        for (int i = n-1; i >= 0; i--)
        {
            int left = 0;
            int right = 0;
            for (int j = i+1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    left++;
                }
                else if (arr[i] < arr[j])
                {
                    right++;
                }
                

            }
            rev.push_back(max(right, left));
        }
        reverse(rev.begin(), rev.end());
        for (int i = 0; i < n; i++)
        {
            cout << rev[i] << " ";
            

            
        }
        cout << endl;
    }
}