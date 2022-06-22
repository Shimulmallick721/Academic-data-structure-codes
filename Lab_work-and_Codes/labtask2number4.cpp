/*4.Initialize an integer array A of size 10.
Take an integer as input and print how many times that integer occurs in A.
*/
#include<iostream>
using namespace std;
int countOccurrences(int arrayA[], int x)
{
	int res = 0;
	for (int i=0; i<10; i++)
		if (x == arrayA[i])
		res++;
	return res;
}

int main()
{
    int i;
	int arrayA[10];
	cout<<"enter value of array; "<<endl;
	for(int i=0;i<10;i++)
    {
        cin>>arrayA[i];
    }

	cout<<" input a number  to search ";
	int x;
	cin>>x;
	cout << "The number occurs "<<countOccurrences(arrayA, x)<<"  times in the array";
	return 0;
}
