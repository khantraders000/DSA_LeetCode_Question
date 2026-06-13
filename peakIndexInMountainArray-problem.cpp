#include <iostream>
#include <vector>
using namespace std;

int peakElementIndex(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 10, 9, 6, 5};
    int highElement = peakElementIndex(arr);
    cout << "highest index in array is : " << highElement << " and at that index element is : " << arr[highElement] << endl;
}