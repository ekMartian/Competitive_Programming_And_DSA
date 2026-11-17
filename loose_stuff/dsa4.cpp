#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, k;
    std::cin >> n;
    std::cin >> k;
    std::vector <long long int> arr;

    for (int i = 0; i < n; i++)
    {
        long long int a;
        std::cin >> a;
        arr.push_back(a);

    }
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < k; i++)
    {
        int index = 0;
        int minimum = 0;
        bool todo = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] != 0)
            {
                minimum = arr[j];
                std::cout << minimum << std::endl;
                index = j;
                todo = true;
                break;
            }
        }
        if (todo == true)
        {
            for (int j = index; j< n; j++)
            {
                arr[j]-=minimum;
            }

        }
        
    }
    // int minimum;
    // int index;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         minimum = arr[i];
    //         index = i;
    //         break;
    //     }
    // }
    // for (int i = index + 1; i < n; i++)
    // {
        
    // }
    // int minimum = arr[0];
    



}