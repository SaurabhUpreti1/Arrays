#include <iostream>
using namespace std;
int main()
{
    int n, k, arr[n], sum = 0;

    cout << "enter element you want to search in array:";
    cin >> k;
    cout << "enter number of elements in an array:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == k)
        {
            cout << "found";
            sum++;
            break;
        }
    }
    if (sum == 0)
    {
        cout << "not found";
    }
}