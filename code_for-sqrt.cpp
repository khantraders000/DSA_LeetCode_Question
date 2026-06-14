#include <iostream>
using namespace std;

int sqrt(int n)
{
    int s = 0;
    int e = n;
    int target = n;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (target == mid * mid)
        {
            return mid;
        }
        else if (mid * mid > target)
        {
            e = mid - 1;
        }
        else
        {
            int ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter the input " << endl;
    cin >> n;
    int square = sqrt(n);
    cout << "this is the out put of given value " << n << " and this is square root " << endl;

    return 0;
}