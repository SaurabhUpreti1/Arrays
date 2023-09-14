#include <iostream>
using namespace std;
int main()
{
    int n, arr[n], d;
    cin >> n;
    cout << "enter till you want to left rotate array";
    cin >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}