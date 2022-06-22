#include <bits/stdc++.h>
using namespace std;

void Odd(int lower, int upper)
{


   // cin>>"lower number is ">>lower;
	//cin>>"upper number is ">>upper;

	if (upper < lower) {
		return;
	}
	upper % 2 == 1 ? Odd(lower, upper - 2)
			: Odd(lower, upper - 1);

	if (upper % 2 == 1) {
		cout << upper << " ";
	}
}
int main()
{
	int lower , upper ;

	cin>>lower;
	cin>>upper;

	cout << "Odd numbers:";
	Odd(lower, upper);
}
