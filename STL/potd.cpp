// C++ program to count all sub-arrays which
// has all elements less than or equal to X
#include <iostream>
using namespace std;

// function to count all sub-arrays which
// has all elements less than or equal to X
int countSubArrays(int arr[], int n, int x)
{
	// variable to keep track of length of
	// subarrays with all 1s
	int len = 0;

	// variable to keep track of all subarrays
	int count = 0;

	// binary array of same size
	int binaryArr[n];

	// creating binary array
	for (int i = 0; i < n; i++) {
		if (arr[i] <= x)
			binaryArr[i] = 1;
		else
			binaryArr[i] = 0;
	}
    
	// start traversing the binary array
	for (int i = 0; i < n; i++) {

		// once we find the first 1, keep checking
		// for number of consecutive 1s
		if (binaryArr[i] == 1) {
			int j;

			for (j = i + 1; j < n; j++)
				if (binaryArr[j] != 1)
					break;

			// calculate length of the subarray
			// with all 1s
			len = j - i;

			// increment count
			count += (len) * (len + 1) / 2;

			// initialize i to j
			i = j;
		}
	}

	return count;
}

// Driver code
int main()
{
	int arr[] = {1,2,3,4};
	int x = 6;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << countSubArrays(arr, n, x);
	return 0;
}
