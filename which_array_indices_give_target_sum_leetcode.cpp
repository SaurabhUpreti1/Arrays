#include <iostream>
using namespace std;
int main()
{
    int n, t, arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter sum which you target" << endl;
    cin >> t;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == t)
            {
                cout << "indices are:";
                cout << i << " " << j;
                return 0;
            }
        }
    }
    return 0;
}