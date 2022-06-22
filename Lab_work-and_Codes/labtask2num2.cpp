/*Initialize TWO integer arrays A and B of different sizes. Make a new array with the common
elements between A and B. Print the new array element(s).If there is no common element,
output “No common element!”.
*/
#include <bits/stdc++.h>
using namespace std;
void printcommonelement(int arr1[], int arr2[], int m,int n)
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
		if(arr1[i]!=arr2[j]){
            cout<<"\n There is no common element";
		}
	}

}
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
	for(int j=0;j<=5;j++)
    {

        cin>>arr2[j];
    }
    cout<<"common element array is: "<<endl;
	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

	printcommonelement(arr1, arr2, m, n);

	return 0;
}
