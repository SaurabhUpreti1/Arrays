#include <iostream>
using namespace std;

int main()
{
    int t, n, arr[n], j;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    arr[i] == arr[j] == 1;
                }
            }
        }
        if (arr[i] != 1)
        {
            cout << arr[i];
        }
    }
}
