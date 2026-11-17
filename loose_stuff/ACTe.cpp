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
        sort(arr.begin(), arr.end());
        int maximum = 1;
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i-1])
            {
                count++;
                maximum = max(count, maximum);
            }
            else
            {
                count = 1;
                
            }
        }
        // cout << maximum << endl;
        int answer = 0;
        answer+=(n-maximum);
        int i = 0;
        int j = 0;
        // bool flag = false;
        while (i < (n-maximum))
        {
            i = i + (pow(2, j) * maximum);
            j++;
            answer++;
        }
        // while (pow(2, i)*maximum < (n-maximum))
        // {
        //     // flag = true;
        //     // cout << "e" << endl;
        //     answer++;
        //     i++;
        // }
        
        cout << answer << endl;
    }
}