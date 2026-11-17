#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector <int> numbers;
        int count = 0;
        int sum = 0;
        for (int i = 0; i < m*n; i++)
        {
            int a;
            cin >> a;
            if (a < 0)
            {
                count++;
            }
            numbers.push_back(a);
            sum+=abs(a);
        }
        if ((count & 1) == 0)
        {
            cout << sum << endl;

        }
        else

        {
            
            
            for (int i = 0; i < m*n; i++)
            {
                numbers[i] = abs(numbers[i]);
            }
            sort(numbers.begin(), numbers.end());
            numbers[0] = numbers[0] * (-1);
            sum = 0;
            for (int i = 0; i < m*n; i++)
            {
                sum+=numbers[i];
            }
            cout << sum << endl;
        }
        // vector <vector <int, int> > arr;
        // vector <vector <int>> arr;
        // int count = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     vector <int> row;
        //     for (int j = 0; j < m; j++)
        //     {
        //         int a;
        //         cin >> a;
        //         row.push_back(a);
        //         if (a < 0)
        //         {
        //             count++;
        //         }


        //     }
        //     arr.push_back(row);
        // }

        // int count = 
        // for(int i = 0; i < n; i++)
        // {
            
        //     for (int j = 0; j < m; j++)
        //     // {

        //     //     // ve
        //     // }
        //     {
        //         if (arr[i][j] < 0)
        //         {
        //             if (j > 0 && i > 0)
        //             {
        //                 if (arr[i-1][j] < 0)
        //                 {
        //                     count-=2;
        //                     arr[i-1][j]*=(-1);
        //                     arr[i][j]*=(-1);
        //                     continue;

        //                 }
        //                 if (arr[i][j-1] < 0)
        //                 {
        //                     count-=2;
        //                     arr[i][j-1]*=(-1);
        //                     arr[i][j]*=(-1);
        //                     continue;

        //                 }
        //                 if (arr[i][j+1] < 0)
        //                 {
        //                     count-=2;
        //                     arr[i-1][j]*=(-1);
        //                     arr[i][j]*=(-1);
        //                     continue;

        //                 }
                        
                        
        //             }

        //         }
                

            
        
    }
}//
//\/
//operator precedeence
/// the & hting in bitwise 
