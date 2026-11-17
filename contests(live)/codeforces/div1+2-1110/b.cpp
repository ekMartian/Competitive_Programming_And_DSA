#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, c;
        cin >> n >> c;
        vector <long long int> arr;
        long long int count = 0;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back(a);
            if (a < c)
            {
                count++;
            }

        }
        // cout << "lhere" << endl;
        sort(arr.begin(), arr.end());
        long long int j = 0;
        // int count = 0;
        // while (arr[j] < c && j < n)
        // {
        //     cout << "loop" << endl;
        //     count++;
        //     j++;
        // }






        // cout << "Here" << endl;
        long long int score = 0;
        if (count < n/2)
        {
            for (int i = count; i < n; i++)
            {
                score+=(arr[i]-c);
            }
            // cout << "score now" << score << endl;
        }
        
        else
        {
            for (int i = n-1; i >= n/2; i--)
            {
                score+=(arr[i]-c);
            }
            // for (int i = count; i < n; i++)
            // {
            //     score+=(arr[i]-c);
            // }
            // // cout << "scorenownow" << score << endl;
            // int done = n - count;
            // // cout << "donecount" << done << " "<< count<<endl;
            // vector <int> resurgence;
            // for (int i = done; i < count; i++)
            // {
            //     resurgence.push_back(arr[i]);
            // }
            // // koko
            // for (int i = resurgence.size() - 1; i >= 0; i--)
            // {
                
            // }
            // for (int i = done; i < count; i++){
                
            //     score+=(arr[i]-c);
                
            // }
        }
        cout << score << endl;
    }






    


}