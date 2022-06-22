#include<iostream>
//#include <bits/stdc++.h>
using namespace std;

void odd(int lower, int upper)
{
    //for(int lower; lower<=upper;lower++)
   // {
       // if(lower % 2==1){
         //   cout<<odd;
        //}
   // }

	if (upper < lower) {
		return;
	}
	upper % 2 == 1 ? odd(lower, upper - 2): odd(lower, upper - 1);

	if (upper % 2 == 1) {
		cout << upper << " ";
	}
}
int main()
{
	int lower , upper ;
	//lower=12;
	//upper=30;

	cout<<"lower number is"<<endl;
	cin>>lower;
	cout<<"upper number is"<<endl;
	cin>>upper;

	cout << "Odd numbers:";
	odd(lower, upper);
}
