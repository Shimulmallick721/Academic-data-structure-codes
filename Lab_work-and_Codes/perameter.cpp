/*3.Write a function that takes TWO parameters to print all the odd numbers between a given range.
Input the starting value of the range and ending value of the range. Then, send them as the parameters to your function.
*/
#include<iostream>
using namespace std;
int main()
{
    int i,lowerLimit,upperLimit,number;
    i=upperLimit;
    //number=0;
    cout<<"Enter lower limit: ";
    cin>>lowerLimit;
    cout<<"Enter upper limit: ";
    cin>>upperLimit;
    //lowerLimit=
    for(int i; i>=lowerLimit;i++)
    {
        if(lowerLimit %2 == 1)
        {
            cout<<"print the number"<<number<<endl;
            number++;
        }
    }
    cout<<"lowerLimit is :"<<lowerLimit<<endl;
    cout<<"upperLimit is :"<<upperLimit<<endl;

    return 0;





}
