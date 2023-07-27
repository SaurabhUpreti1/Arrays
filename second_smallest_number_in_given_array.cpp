#include <iostream>
#include <climits>
using namespace std;
int secondsmallest(int arr[], int n)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < ssmallest)
        {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}
int main()
{
    int arr[5] = {1, 6, 3, 5, 2};
    int aa[5] = {-1, -5, -2, -4, -3};
    cout << secondsmallest(arr, 5) << endl;
    cout << secondsmallest(aa, 5) << endl;
}