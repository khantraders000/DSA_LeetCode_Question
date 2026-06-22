#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int size)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main()
{
    int arr[] = {1, 6, 5, 8, 9, 2};
    int size = 5;

    cout << secondLargest(arr, size);

    return 0;
}