/*5.Initialize an integer array of size 10.
Print the number of time each element occurs in the array.
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
	cout <<x<< " occurs="<<countOccurrences(arrayA, x)<<"  times "<<endl;
	cout<<" input a number  to search ";
	cin>>x;
    cout <<x<< " occurs="<<countOccurrences(arrayA, x)<<"  times "<<endl;
    cout<<" input a number  to search ";
	cin>>x;
	cout <<x<< " occurs="<<countOccurrences(arrayA, x)<<"  times "<<endl;
	cout<<" input a number  to search ";
	cin>>x;
	cout <<x<< " occurs="<<countOccurrences(arrayA, x)<<"  times "<<endl;
	cout<<" input a number  to search ";
	cin>>x;
	cout <<x<< " occurs="<<countOccurrences(arrayA, x)<<"  times "<<endl;
	return 0;
}

