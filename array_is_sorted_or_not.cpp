#include <iostream>
using namespace std;
int sorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i + 1] >= arr[i])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[5] = {1, 1, 2, 3, 4};
    int a[6] = {1, 2, 3, 3, 4, 1};
    int b[6] = {1, 2, 3, 4, 5, 4};
    cout << sorted(arr, 5) << endl;
    cout << sorted(a, 6) << endl;
    cout << sorted(b, 6);
    return 0;
}