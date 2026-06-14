#include <iostream>
using namespace std;

int sqrt(int n)
{
    // O(logn)
    int ans = -1;
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
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double precisionSQRT(int n){
    // O(precision)
    double square = sqrt(n);
    int precision = 12;
    double step = 0.1;
    while(precision--){
        double j = square;
        while (j*j<=n)
        {
            square = j;
            j+=step;

        }
        step/=10;
        
    }
    return square;
}

int main()
{
    //TC: O(logn) + O(precision)
    int n;
    cout << "enter the input : " << endl;
    cin >> n;
    double square = precisionSQRT(n);

    //cout<<ans<<endl; //cout prints only upto 5 precision
    cout << "this is the out put of given value " << n << " and this is square root : "<<square << endl;

    //to print precision more than 5 use c printer:

    printf("Precision sqrt:  %.12f\n", square);

    return 0;
}