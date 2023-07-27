#include <iostream>
#include <climits>
using namespace std;

int secondlargest(int arr[], int size)
{
    int largest = arr[0];
    int slargest = INT_MIN;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest && arr[i] != largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}
int main()
{
    int arr[6] = {-1, -2, -2, -3, -3, 0};
    int ar[5] = {5, 3, 4, 2, 1};
    cout << secondlargest(arr, 6) << endl;
    cout << secondlargest(ar, 5);
}