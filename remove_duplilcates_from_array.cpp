#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 1, 2, 2, 2, 3, 3};
    int end = 6;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] != 0)
        {
            for (int j = 6; j > i; j--)
            {
                if (arr[i] == arr[j])
                {
                    arr[j] = arr[end];
                    arr[end] = 0;
                    end--;
                }
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}
