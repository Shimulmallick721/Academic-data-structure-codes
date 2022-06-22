#include <iostream>
using namespace std;
int queue[5], n = 5, front = - 1, rear = - 1;
void Enqueue() {
   int value;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>value;
      rear++;
      queue[rear] = value;
   }
}
void Dequeue() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch,value;
   cout<<"What you want to do? "<<endl;
   cout<<"1. Enqueue element in the queue"<<endl;
   cout<<"2. Dequeue element in the queue"<<endl;
   cout<<"3. Display the Queue"<<endl;
   do {
      cout<<"I want to "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Enqueue();
         break;
         case 2: Dequeue();
         break;
         case 3: Display();
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=3);
   return 0;
}
