// C++ program to find intersection of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;

/* Function prints Intersection of arr1[] and arr2[]
m is the number of elements in arr1[]
n is the number of elements in arr2[] */
void printIntersection(int arr1[], int arr2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (arr1[i] < arr2[j])
			i++;
		else if (arr2[j] < arr1[i])
			j++;
		else /* if arr1[i] == arr2[j] */
		{
			cout << arr2[j] << " ";
			i++;
			j++;
		}
	}
}

/* Driver program to test above function */
int main()
{
	int arr1[6];
	cout<<"enter value of arr1"<<endl;
	for(int i=0;i<=5;i++)
    {
        cin>>arr1[i];
    }
	int arr2[6];
	cout<<"enter value of arr2"<<endl;
	for(int i=0;i<=5;i++)
    {

        cin>>arr2[i];
    }
	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

	// Function calling
	printIntersection(arr1, arr2, m, n);

	return 0;
}
