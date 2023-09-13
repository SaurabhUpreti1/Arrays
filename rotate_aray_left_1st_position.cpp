#include <iostream>
using namespace std;
int main()
{

    int temp;
    int arr[5] = {1, 45, 34, 22, 55};
    temp = arr[0];
    for (int i = 1; i < 5; i++)
    {

        arr[i - 1] = arr[i];
    }
    arr[4] = temp;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}