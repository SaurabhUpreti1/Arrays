#include <iostream>
using namespace std;
int main()
{
    int n, arr[n];
    cout << "enter no of elements";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}