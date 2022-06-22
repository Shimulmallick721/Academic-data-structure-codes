//1. Take Inputs from User and Store them in an Array and Display Sum and Average of
//Array Elements. Use function and array.
#include<iostream>
using namespace std;
void average(int i,int sum,int n)
{

sum=0;
n=5;
int arr;
for(i = 0; i <= n; i++)
{
    sum=sum+ arr[i];
}
average = sum / n;
}

//cout << "Average = " << average;

int main()
{

    int arr;
    cout<<"enter value of arr1"<<endl;
    for(int i=0; i<=5; i++)
    {
        cin>>arr[i];
    }
    average(sum,n);
    cout<<average;
    return 0;

}
