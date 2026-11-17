#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin >> t;
    bool flag = true;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> numbers;
        int mindif = INT_MAX;
        int ans;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
    
            numbers.push_back(a);
            if (i > 0)
            {
                mindif=min(mindif, a - numbers[i-1]);
                // if (mindif = a-numbers[i-1])
                // {
                //     ans = i;

                // }
            }


        }
        vector <int> numberssorted;
        for (int i = 0; i < n; i++)
        {
            numberssorted.push_back(numbers[i]);
        }
        sort(numberssorted.begin(), numberssorted.end());
        for (int i = 0; i < n; i++)
        {
            if (numberssorted[i] == numbers[i])
            {
                continue;
            }
            else
            {
                flag = false;
            }
        }
        if (flag == false)
        {

            cout << (mindif + 1) << endl;
        }
    }


}