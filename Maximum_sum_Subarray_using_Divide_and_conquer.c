#include <stdio.h>
#include <limits.h>

// Naive solution to find maximum sum subarray using
// divide and conquer
int maximum_sum(int A[], int n)
{
	int max_sum = INT_MIN;
	int sum = 0;

	// do for each subarray starting with i
	for (int i = 0; i < n - 1; i++)
	{
		// calculate sum of subarray A[i..j]

		sum = 0;	// reset sum

		// do for each subarray ending with j
		for (int j = i; j < n; j++)
		{
			sum += A[j];

			// if current subarray sum is greater than the maximum
			// sum calculated so far, update the maximum sum
			if (sum > max_sum)
				max_sum = sum;
		}
	}

	return max_sum;
}

// Maximum Sum Subarray using Divide & Conquer
int main(void)
{
	int arr[] = { 2, -4, 1, 9, -6, 7, -3 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("The maximum sum of the subarray is %d", maximum_sum(arr, n));

	return 0;
}
