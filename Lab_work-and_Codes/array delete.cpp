#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int k, i, n=10, mimo[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //n=total elements.
n--; // Deleting the last element of the array. Decrease n; last element 8 is no longer part of list.
/* delete value 1 from the beginning of array. */
n--;         // deleting the value 1 will decrease the total elements n by one.
for(i=0; i<n; i++)  //shift all the values one index backward. The value in index
   mimo[i] = mimo[i+1]; //2 goes to 1, 3 goes to 2,…, nth goes to (n-1)th.
k = 3; // delete value 4 from the middle (index k=2) of the array
n--;         // deleting the value 4 will decrease the total elements n by one.
for(i=k; i<n; i++)      //shift all the values one index forward. i.e. the value
   mimo[i] = mimo[i+1]; //in index k+1 goes to k,…, nth goes to (n-1)th.
for(i=0; i<n; i++)      //printing all the values in the array after insert
   cout<<mimo[i];
}


