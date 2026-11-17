#include <iostream>
#include <vector>

void merge(std::vector<int> &arr, int left, int mid, int right)
{



    
}

void mergeSort(std::vector<int> &arr, int left, int right)
{

    if (left >= right)
    {
        return;
    }
    int mid  = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, lmid+1, right);
    merge(arr, left, mid, right);

}

int main()
{
    std::vector<int> arr = {38, 27, 43, 10};
    int n = arr.size();
    mergeSort(arr, 0, n-1);

}