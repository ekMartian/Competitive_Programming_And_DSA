#include <bits/stdc++.h>
using namespace std;


bool is_palindrome(vector <int>& vec, int a)
{
    vector <int> isit;
    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        if (vec[i] != a)
        {
            isit.push_back(vec[i]);
        }
    }
    bool ans = true;
    int start = 0; 
    int end = isit.size()-1;
    while (start < end)
    {
        if (isit[start] == isit[end])
        {
            start++;
            end--;  
        }
        else
        {
            ans = false;
            break;
        }
        // start++;
        // end--;

    }
    return ans;


}
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
        bool one = is_palindrome(arr, INT_MAX);
        
        int start = 0;
        int end = n-1;
        while (start < end && arr[start] == arr[end])
        {
            start++;
            end--;
        }
        int optionone = arr[start];
        int optiontwo = arr[end];
        bool two = is_palindrome(arr, optionone);
        bool three = is_palindrome(arr, optiontwo);
        // start++;
        // end--;
        if (one || two || three)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;

        }

    }
}