// Check all pairs of Sum
// N=4 , arr = 0 1 2 3   // 8 -->2 4 6 5 3 8 7 1

#include <iostream>
using namespace std;

void checkAllPairSum(int arr[], int n, int k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			if (arr[i] + arr[j] == k)
			{
				cout << "(" << arr[i] << ", "
					 << arr[j] << ")"
					 << ", ";
			}
		}
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
	int k = 8;

	checkAllPairSum(arr, n, k);

	return 0;
}
