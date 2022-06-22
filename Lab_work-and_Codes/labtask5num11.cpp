
#include <iostream>
using namespace std;

int Queue[4],maxsize=4,value;
int front =-1, rear = -1;

void Enqueue(int value) {
   if ((front == 0 && rear == maxsize-1) || (front == rear+1)) {
      cout<<"Queue Overflow \n";
      return;
   }
   if (front == -1 && rear ==-1) {
      front = 0;
      rear = 0;
   }
   else {
      rear=(rear+1)%maxsize;
   }
   Queue[rear] = value ;
}
void Dequeue() {
   if (front == -1) {
      cout<<"Queue Underflow\n";
      return ;
   }
   cout<<"Element deleted from queue is : "<<Queue[front]<<endl;

   if (front == rear) {
      front = -1;
      rear = -1;
   }
   else {
     front=(front+1)%maxsize;
   }
}
void displayQueue() {
   if (front == -1) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are :\n";
   if (front <= rear) {
      for(int i=front; i<=rear; i++){
        cout<<Queue[i];
      }
   }
    else {
      for(int i=front; i<=(maxsize-1); i++){
        cout<<Queue[i];
      }
      front = 0;
        for(int i=0; i<=rear; i++){
        cout<<Queue[i];
      }
   }
   cout<<endl;
}
int main() {

   int ch, value;
   cout<<"What you want to do? "<<endl;
   cout<<"1. Enqueue element in the queue"<<endl;
   cout<<"2. Dequeue element in the queue"<<endl;
   cout<<"3. Display the Queue"<<endl;
   do {
      cout<<"Enter choice : "<<endl;
      cin>>ch;
      switch(ch) {
         case 1:
         cout<<"enter Enqueue element "<<endl;
         cin>>value;
         Enqueue(value);
         break;

         case 2:
         Dequeue();
         break;

         case 3:
         displayQueue();
         break;
      }
   }
    while(ch != 3);
   return 0;
}
