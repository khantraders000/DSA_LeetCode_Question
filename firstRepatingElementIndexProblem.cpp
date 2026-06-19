#include <iostream>
using namespace std;
int firstRepeatinElement(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                return i;
            }
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int size = 7;
    int ans = firstRepeatinElement(arr, size);
    cout << "the first repeating element index is : " << ans << "and element is :" << arr[ans] << endl;

    return 0;
}