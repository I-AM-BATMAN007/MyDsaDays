// C++ program to find Maximum difference
// between two elements such that larger
// element appears after the smaller number
#include <bits/stdc++.h>
using namespace std;

/* The function assumes that there are
at least two elements in array. The
function returns a negative value if the
array is sorted in decreasing order and
returns 0 if elements are equal */
int maxDiff(int arr[], int arr_size)
{	
int max_diff = arr[1] - arr[0];
for (int i = 0; i < arr_size; i++)
{
	for (int j = i+1; j < arr_size; j++)
	{	
	if (arr[j] - arr[i] > max_diff)
		max_diff = arr[j] - arr[i];
	}
}		
return max_diff;
}

/* Driver program to test above function */
int main()
{
	int arr[] = {1, 2, 90, 10, 110};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	// Function calling
	cout << "Maximum difference is " << maxDiff(arr, n);

return 0;
}
//--------------------------------------------------------------------------------------

// C++ program to find Maximum difference
// between two elements such that larger
// element appears after the smaller number
#include <bits/stdc++.h>
using namespace std;

/* The function assumes that there are
at least two elements in array. The
function returns a negative value if the
array is sorted in decreasing order and
returns 0 if elements are equal */
int maxDiff(int arr[], int arr_size)
{
	// Maximum difference found so far
	int max_diff = arr[1] - arr[0];
	
	// Minimum number visited so far
	int min_element = arr[0];
	for(int i = 1; i < arr_size; i++)
	{	
		if (arr[i] - min_element > max_diff)							
		max_diff = arr[i] - min_element;
		
		if (arr[i] < min_element)
			min_element = arr[i];					
	}
	
	return max_diff;
}

/* Driver program to test above function */
int main()
{
	int arr[] = {1, 2, 90, 10, 110};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	// Function calling
	cout << "Maximum difference is " << maxDiff(arr, n);

	return 0;
}
