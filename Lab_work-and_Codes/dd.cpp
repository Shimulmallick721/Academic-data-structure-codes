//2.Find the summation of the diagonal and anti-diagonal elements for the given array. Take input from user keyboard.

#include<iostream>
using namespace std;

int main()
{
    int i,j,m, n, sum = 0;

    m=3;
    n=3;
    int arr[m][n];
    cout << "\nInput the matrix elements\n";
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            cin >> arr[i][j];
    }

    cout << "diagonal and anti-diagonal"<<endl;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
           if(i+j==n+1)
            {
                cout << arr[i][j] << "  ";
                sum = sum + arr[i][j];
            }
            else
                cout <<"    ";
        }
        cout << endl;
    }
    cout << " Sum of diagonal and anti-diagonal is " << sum << endl;
    return 0;
}
