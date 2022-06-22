#include<iostream>

using namespace std;
double average(float sum,int n)
{


    return sum/n;
}

int main()
{
    int n;
    cout << "Enter number of elements\n";
    cin >> n;
    int array[5];
    int sum=0;
    cout<<"Enter array elements  "<<endl;
    for(int i=0; i<n; i++)
    {

        cin>>array[i];
        sum=sum+array[i];
    }
    cout<<"sum is "<<sum<<endl;
    cout<<"Average of array elements is "<<average(sum,n)<<endl;
    average(sum,n);

    return 0;
}
