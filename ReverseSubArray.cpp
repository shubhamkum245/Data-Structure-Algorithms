// Given an array of size in & two indexes s & e ,
// Reverse the elements of the array
// s=3 e=7, a[9]: -3 4 2 8 7 9 6 2 10

#include <iostream>
using namespace std;

void reverseSubArray(int arr[], int s, int e)
{
	int i = s;
	int j = e;
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
	int s, e;
	cin >> s >> e;
	reverseSubArray(arr, s, e);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}