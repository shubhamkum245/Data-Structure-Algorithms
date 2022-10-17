// Given an array of size N & a no K, Return true if there exist a pair a[i]
// a[j] such that a[i]+a[j]==k & i!=j
// 3 -2 1 4 3 6 8

#include <iostream>
using namespace std;

bool checkPairSum(int arr[], int n, int k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] + arr[j] == k)
			{
				return 1;
			}
		}
	}
	return 0;
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
	int k = 10;
	if (checkPairSum(arr, n, k))
	{
		cout << "Sum Of Pair" << endl;
	}
	else
	{
		cout << "Not Pair of Sum" << endl;
	}
	return 0;
}