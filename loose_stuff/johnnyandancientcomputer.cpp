#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int n;
        // cin >> n;
        long long int a, b;
        cin >> a >> b;

        if (b%a == 0)
        {
            long long int counter = 0;
            long long int checker = b / a;
            if ((checker != 0 && ((checker&(checker-1))) == 0))
            {
                while (checker % 8 == 0)
                {
                    checker = checker / 8;
                    counter++;
                }
                while (checker % 4 == 0)
                {
                    checker = checker / 4;
                    counter++;
                }
                while (checker % 2 == 0)
                {
                    checker = checker / 2;
                    counter++;
                }
                cout << counter << endl;
                
            }
            else
            cout << -1 << endl;
            


        }
        else if (b%a == b)
        {
            // cout << "entered" << endl;
            long long int counter = 0;
            if (a % b == 0)
            {
                long long int checker = a / b;
                if (checker != 0 && ((checker&(checker-1)) == 0))
            {
                while (checker % 8 == 0)
                {
                    checker = checker / 8;
                    counter++;
                }
                while (checker % 4 == 0)
                {
                    checker = checker / 4;
                    counter++;
                }
                while (checker % 2 == 0)
                {
                    checker = checker / 2;
                    counter++;
                }
                cout << counter << endl;
                // return 0;
            }
            else
            cout << -1 << endl;

            }
            else
            {
                cout << -1 << endl;
                continue;
            }
            
            
            // return 0;

        }
        else
        {
            cout << -1 << endl;
            // return 0;
        }
        // if (b > a)
        // {
        //     a = a*2;
        //     if (b != a)
        //     {
        //         a = a*2;
        //         if (b == a)
        //         {
        //             cout << 2 << endl;
        //             return 0;
        //         }
        //         else
        //         {
        //             a = a* 2;
        //             if (a == b)
        //             {
        //                 cout << 3 << endl;
        //                 return 0;
        //             }
        //             else
        //             {
        //                 cout << -1 << endl;
        //                 return 0;

        //             }
                   
        //         }

        //     }
        //     else
        //     {
        //         cout << 1 << endl;
        //         return 0;
        //     }
        // }
        // else if (b < a)
        // {
        //     if ((a&1) == 0)
        //     {
        //         a = a / 2;
        //         if (a == b)
        //         {
        //             cout << 1 << endl;
        //             return 0;
        //         }
        //         else
        //         {
        //             if (a % 2 == 0)
        //             {
        //                 a = a/2

        //             }
        //         }
        //     }
        // }

    }
}