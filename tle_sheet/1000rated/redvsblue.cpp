#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        int partitions = b+1;
        if (r % partitions == 0)
        {
            int between = r / partitions;
            bool flag = true;
            while(r > 0 || b > 0)
            {
                // cout << "r = " << r << " b =  " << b << endl;
                if (flag == true)
                {
                    int done = between;
                    while (done > 0)
                    {
                        cout << "R";
                        r--;
                        done--;
                    }
                    flag = false;
                }
                else
                {
                    cout << "B";
                    b--;
                    flag = true;
                }

            }
            cout << endl;
            // cout << r / partitions << endl;
        }
        else
        {
            int pehla = r % partitions;
            int doosra = partitions - pehla;
            int firsts = r/partitions + 1;
            int seconds = r/partitions;
            bool flag = true;
            for (int i = 0; i < pehla; i++)
            {
                
                
                int done = firsts;
                while (done > 0)
                {
                    cout << "R";
                    r--;
                    done--;
                    // flag = false;
                }
            
        
            
                cout << "B";
                b--;
                // flag = true;
                


            }
            for (int i = 0; i < doosra; i++)
            {
                while(r > 0 || b > 0)
                {
                    // cout << "r = " << r << " b =  " << b << endl;
                    if (flag == true)
                    {
                        int done = seconds;
                        while (done > 0)
                        {
                            cout << "R";
                            r--;
                            done--;
                        }
                        flag = false;
                    }
                    else
                    {
                        cout << "B";
                        b--;
                        flag = true;
                    }

                }
            }
            
            // bool flag = true;
            // while (r % partitions != 0)
            // {
            //     // partitions--;
            //     if (flag == true)
            //     {
            //         int done = firsts;
            //         while (done > 0)
            //         {
            //             cout << "R";
            //             r--;
            //             done--;
            //         }
            //         flag = false;

            //     }
            //     else if (flag == false)
            //     {
            //         cout << "B";
            //         b--;
            //         flag = true;
            //         partitions--;
            //     }
                
            // }
            // while (r > 0 || b > 0)
            // {

            // }
            // while(r > 0 || b > 0)
            // {
            //     // cout << "r = " << r << " b =  " << b << endl;
            //     if (flag == true)
            //     {
            //         int done = seconds;
            //         while (done > 0)
            //         {
            //             cout << "R";
            //             r--;
            //             done--;
            //         }
            //         flag = false;
            //     }
            //     else
            //     {
            //         cout << "B";
            //         b--;
            //         flag = true;
            //     }

            // }
            cout << endl;
            // cout  << r / partitions + 1 << endl;
        }
    }
}

// RRBRRBRRBRRBRRBRRBR
// RRBRRBRRBRRBRRBRRBR
// RRBRRBRRBRRBRRBRBRBR
// RRBRRBRRBRBRBRBRBRBRBR