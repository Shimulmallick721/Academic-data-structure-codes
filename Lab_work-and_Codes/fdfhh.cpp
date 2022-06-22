#include <bits/stdc++.h>
using namespace std;

void odd(int lower, int upper)
{

    for(int i=lower; i<=upper;i++)
   {
    if(i % 2==1){
            cout<<i<<" ";
           // odd++
        }
   }


	//upper % 2 == 1 ? odd(lower, upper - 2): odd(lower, upper - 1);

	//if (upper % 2 == 1) {
		//cout << upper << " ";
	//}
}
int main()
 {
	int lower , upper ;

	cout<<"lower number is"<<endl;
	cin>>lower;
	cout<<"upper number is"<<endl;
	cin>>upper;

	cout << "Odd numbers:";
	odd(lower, upper);
	return 0;
}
