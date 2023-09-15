#include <iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int row, col, target;
    cin >> row;
    cin >> col;
    cin >> target;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "found";
                break;
            }
            break;
        }
    }
    cout << "notfound";
    return 0;
}