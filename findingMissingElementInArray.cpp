#include <iostream>
using namespace std;

int findMissing(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2; 

        if (arr[mid] - mid == 1)
        {
            // Missing number right side me hai
            s = mid + 1;
        }
        else
        {
            // Missing number left side me hai
            e = mid - 1;
        }
    }

    return s + 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int n = 7;

    cout << "Missing Number = "
         << findMissing(arr, n);

    return 0;
}