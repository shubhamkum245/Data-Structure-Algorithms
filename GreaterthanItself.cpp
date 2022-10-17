// Given an array of size N. count the number of elements which have at least one element
// Greater than itself
// -3 -2 6 8 4 8 5

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
	//  First Step  --> find max no element
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	// cout << max << " ";

	// 2nd Step --> Iterate and find max count no
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == max)
		{
			cnt++;
		}
	}
	// cout << cnt << endl;

	// 3rd Step Return total no greater than iteself (n-cnt)
	cout << (n - cnt) << endl;

	return 0;
}