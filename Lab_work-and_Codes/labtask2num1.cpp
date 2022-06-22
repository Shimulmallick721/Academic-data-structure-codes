/*1.Initialize TWO integer arrays of different sizes. Merge the input arrays and
create a new array. Then print the new array in reverse order.*/
#include<iostream>
using namespace std;

void mergearr(int arr1[], int arr2[], int n1,int n2, int arr3[])
{
	int i = 0, j = 0, k = 0;
	while (i<n1 && j <n2)
	{
		if (arr1[i] < arr2[j])
			arr3[k++] = arr1[i++];
		else
			arr3[k++] = arr2[j++];
	}
	while (i < n1)
		arr3[k++] = arr1[i++];
	while (j < n2)
		arr3[k++] = arr2[j++];
}
int main()
{
	int arr1[5];
	cout<<"enter value of arr1"<<endl;
	for(int i=0;i<=4;i++)
    {
        cin>>arr1[i];
    }
	int n1 = sizeof(arr1)/sizeof(arr1[0]);

	int arr2[7];

	cout<<"enter value of arr2"<<endl;
	for(int j=0;j<=6;j++)
    {
        cin>>arr2[j];
    }
	int n2 = sizeof(arr2)/sizeof(arr2[0]);

	int arr3[n1+n2];
	mergearr(arr1, arr2, n1, n2, arr3);

	cout << "merge array" <<endl;
	for (int k=0; k < n1+n2; k++)
		cout << arr3[k] << " ";
		cout<<'\n'<<"reverse array of arr1"<<endl;
		for(int i=4;i>=0;i--)
        {
            cout<<arr1[i]<<" ";
        }
        cout<<'\n'<<"reverse array of arr2"<<endl;
		for(int j=6;j>=0;j--)
        {
            cout<<arr2[j]<<" ";
        }
		cout<<'\n'<<" Merge reserve array"<<endl;
    for(int k=11;k>=0;k--)
    {
        cout<<arr3[k]<<" ";
    }
    cout<<'\n'<<"Merge reserve array"<<endl;
    for(int i=11;i>=0;i--)
    {
        cout<<arr3[i]<<" ";
    }


	return 0;
}
