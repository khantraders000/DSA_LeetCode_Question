#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{0, 1, 0, 1, 1, 0, 1, 0, 1, 1};
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;
    while (i < end)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            i++;
            start++;
        }
        else
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }
    cout << "Sorted Array: ";

    for (int j = 0; j < arr.size(); j++)
    {
        std::cout << arr[j] << " ";
    }
    return 0;
}