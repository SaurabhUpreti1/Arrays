#include <iostream>
using namespace std;
int max_value(int arr[], int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{

		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
int min_value(int arr[], int size)
{
	int min = arr[0];
	for (int i = 1; i < size; i++)
	{

		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
int main()
{
	int n, arr[n];
	cout << "enter no. of elements in your array";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	/* max_value(arr, n);
	min_value(arr, n); */
	cout << "maximum value is:" << max_value(arr, n) << endl;
	cout << "minimum value is:" << min_value(arr, n) << endl;
}