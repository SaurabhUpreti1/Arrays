#include <iostream>
using namespace std;
int reverse_array(int arr[], int n)
{
    int start = 0, end = n - 1, temp;
    while (start <= end)
    {
        /* temp = arr[start];
        arr[start] = arr[end];

        arr[end] = temp; */
        /* we will not use this method of swaping two elements we will use swap keyword */
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n, arr[n];
    cout << "enter no of elements";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse_array(arr, n);

    return 0;
}