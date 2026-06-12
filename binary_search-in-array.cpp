#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int target)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            e = mid + 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int target = 7;
    int search_value = binary_search(arr, size, target);
    cout << search_value << endl;
    return 0;
}
