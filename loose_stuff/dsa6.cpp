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
        std:: cin >> a;
        arr.push_back(a);
    }
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < k; i++)

    {
        long long int lowest;
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] != 0)
            {
                
                lowest = arr[j];
                flag = true;
                std::cout<<lowest<<std::endl;
                break;
            }
            

        }
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > 0)
            {
                arr[j] = arr[j] - lowest;
            }
        }
        if (flag == false)
        {
            std::cout<<0<<std::endl;
        }

    }

}