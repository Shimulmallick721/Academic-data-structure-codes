/*1.Initialize TWO integer arrays of different sizes. Merge the input arrays and
create a new array. Then print the new array in reverse order.*/

#include <iostream>
using namespace std;

void mergearr(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
    int i=0,j=0,k=0;

    for(int i=0; i<=n1; i++)
    {
if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    for(int i=0 ;i<=n2;i++)
    {
       arr3[k++] = arr1[i++];
    }
    for(int i=0;i<=n1+n2;i++)
    {
        cout<<arr3;
    }

}
int main()
{

    int arr1[5]= {10,20,30,40,50};
     int n1 = sizeof(arr1);
    int arr2[8]= {1,2,3,4,5,6,7,8};
    int n2=sizeof(arr2);
    int arr3[n1+n2];
    mergearr(arr1,arr2,arr3,n1,n2);
    cout << "merge array" <<endl;
    for (int i=0; i < n1+n2; i++)
        cout << arr3[i] << " ";
        return 0;
}
