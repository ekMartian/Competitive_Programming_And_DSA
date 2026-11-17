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
        vector <int> numbers; 
        int counter = 0;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            numbers.push_back(a);
            // if (a <= i)
            // {
            //     cout << -1 << endl;
            //     return;
            // }

        }
        reverse(numbers.begin(), numbers.end());
        int i = 1;
        while (i < n)
        {
            // if (numbers[i] == 0 && i != n-1)
            // {
            //     cout << -1 << endl;
            //     flag = 0;
            //     break;
            // }
            
            {
                if (numbers[i] >= numbers[i-1])
                {
                    numbers[i] = numbers[i]/2;
                    if (numbers[i-1] == 0)
                    {
                        cout << -1 << endl;
                        flag = 0;
                        break;
                    }
                    counter++;
                }
                else
                {   
                    i++;
                }

            }
            
        }
        if (flag == 1)
        {
            cout << counter << endl;
        }
        // cout << 

    }
}


//check for infinite loops
