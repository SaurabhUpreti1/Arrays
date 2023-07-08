#include <iostream>
using namespace std;

int main()
{
    int t, a, b, s, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        cin >> a >> b;
        int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
        k = a + b;
        int sum = 0;
        while (k > 0)
        {
            s = k % 10;
            sum = sum + arr[s];
            k = k / 10;
        }
        cout << sum << endl;
    }
    /* for (int i = 0; i < t; i++)
    {

    } */

    return 0;
}