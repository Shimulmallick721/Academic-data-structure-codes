/*3.Initialize an array. Size should be more than FIVE.
 Write your program to change the array in such a way so that there
 cannot be any duplicate element in the array anymore. Print the changed array. If the initialized
array already had no duplicate elements from the beginning, output a message saying “Array already unique!”;
*/
#include <iostream>
using namespace std;


int main()
{
    int arr1[6];
	cout<<"enter value of arr1"<<endl;
	for(int i=0;i<=5;i++)
    {
        cin>>arr1[i];
    }
    cout << "array is: ";

    for (int i=0; i < 6; i++)
    cout << arr1[i] <<" ";

    cout <<"\nUnique changed array: ";
    for (int i=0; i<6; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (arr1[i] == arr1[j])
               break;
         if (i == j)
          cout << arr1[i] << " ";
    }
     cout <<"\nthe array is already unique: ";
    for (int i=0; i<6; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (arr1[i] == arr1[j])
          cout << arr1[j] << " ";
    }

    return 0;
}
