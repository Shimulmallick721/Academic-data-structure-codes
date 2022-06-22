#include<iostream>
using namespace std;
int main()
{
    int i,q;
  int arr[] = {'-','1','+','2','3','*','4'};
   int Stack q;
   i = 1;
   q.Push(arr[i]);
   while (q !=0){
        cout<<q.top();
        q.pop();
        if( i <=3){
            q.push(arr[i*2])
            q.push(arr[i*2+1])
            i++;
       }
  }
}
