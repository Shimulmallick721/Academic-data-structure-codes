#include <iostream>
using namespace std;

// Function declaration
void printevenodd(int cur, int limit);

int main()
{
    int i,lowerLimit, upperLimit,oddnumber;
    i=lowerLimit;

    // Inputting lower and upper limit from user
    cout<<"Enter lower limit: ";
    cin>>lowerLimit;
    cout<<"Enter upper limit: ";
    cin>>upperLimit;
    //printf("Even/odd Numbers from %d to %d are: ", lowerLimit, upperLimit);
    cout<<"odd Numbers from "<<lowerLimit <<" to "<<upperLimit<<endl;
    printevenodd(lowerLimit, upperLimit);

    return 0;
}


//Recursive function to print even or odd numbers in a given range.

void printevenodd(int cur, int limit)
{
    for(int i;i<=lowerLimit;i)
    {
            if(limit%2 == 1)
            {
               cout<<cur<<endl;
            }


    }
    // Recursively call to printevenodd to get next value
    printevenodd(cur + 2, limit);
}
