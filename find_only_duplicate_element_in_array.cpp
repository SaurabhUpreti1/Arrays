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

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] ^ arr[j] == 0)
            {
                cout << "Duplicate Element is:";
                cout << arr[i];
                return 0;
            }
        }
    }
    return 0;
}