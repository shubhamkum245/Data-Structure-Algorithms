//  Given an array of Size N, Reverse the array using constant
// extra space
// a[9]: -1 4 7 6 5 -2 12 8 10

#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
	int i = 0;
	int j = n - 1;
	while (i < j)
	{
		swap(arr[i], arr[j]);
		i++;
		j--;
	}
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	reverse(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
