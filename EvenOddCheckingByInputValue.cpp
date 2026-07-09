#include <iostream>
using namespace std;

int EvenOrOdd(int n) 
{
    if (n % 2 == 0)
    {
        return true; 
    }
    else
    {
        return false;
    }
// # daily question 

int main()
{
    int n;
    cout << "give the input" << endl;
    cin >> n;
    int ans = EvenOrOdd(n);
    if (ans)
    {
        cout << "the input value is even: " << n << endl;
    }
    else
    {
        cout << "the input value is odd: " << n << endl;
    }

    return 0;
}
