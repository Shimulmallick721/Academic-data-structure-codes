/*1. Take Inputs from User and Store them in an Array and Display Sum and Average of
Array Elements. Use function and array.*/
#include <iostream>
using namespace std;
void averagee(int arr[],int n,int sum)
{
    float average;
    cout << "Enter number of elements\n";
    cin >> n;

    cout << "Enter " << n << " elements\n";
    int i;
    // Read "count" elements from user
    for(i=0; i<5; i++)
    {
        cin >> arr[i];
    }

    sum = 0;
    // Find sum of all array elements
    for(i = 0; i < 5; i++)
    {
        sum += arr[i];
        //cout<<"the sum is"<<sum;
    }

    average = (float)sum / n;
}
    int main()
    {

        int arr[5] = {88, 76, 90, 61, 69};
        int n=5;
        int sum;
        float average;
        cout<<"average is ";
        averagee(arr,average,n,sum);
       // cout<<sum;

        return 0;
    }
