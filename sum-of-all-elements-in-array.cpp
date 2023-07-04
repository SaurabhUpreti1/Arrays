#include <iostream>
using namespace std;
int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
}
int main()
{
    int n;
    int arr[n];
    cout << "enter number of elements in array:" << endl;

    cin >> n;

    sum(arr, n);
}