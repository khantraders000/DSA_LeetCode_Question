#include <iostream>
using namespace std;
#include <vector>

void sort(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s < e)
    {
        if (arr[s] < 0)
        {
            s++;
        }
        else if (arr[e] > 0)
        {
            e--;
        }
        else
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
}

int main()
{
    vector<int> arr{1, 2, -3, 4, -5, 6};
    int n = arr.size() - 1;

    sort(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}