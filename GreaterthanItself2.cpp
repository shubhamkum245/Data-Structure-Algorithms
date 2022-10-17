// Given an array of size N. count the number of elements which have at least one element
// Greater than itself
// -3 -2 6 8 4 8 5   using single loop

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int max = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] == max)
		{
			cnt++;
		}
	}

	cout << (n - cnt) << endl;
	return 0;
}