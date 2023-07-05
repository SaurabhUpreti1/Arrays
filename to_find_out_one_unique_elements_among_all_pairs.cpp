#include <iostream>
using namespace std;
int main()
{
    int n, arr[n], temp = 0;
    cout << "enter no of elements";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        temp = temp ^ arr[i];
    }
    cout << temp;
}