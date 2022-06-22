#include <iostream>
using namespace std;
int stack[6], n=6, top=-1;
bool push(int value) {
   if(top>=n-1)
   cout<<"Stack overflowed!!!"<<endl;
   else {
      top++;
      stack[top]=value;
   }
}
bool pop()  {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
int main() {
   int ch, value;
   cout<<"What you want to do? "<<endl;
   cout<<"1) Push element in the stack"<<endl;
   cout<<"2) Pop element from the stack"<<endl;
   cout<<"3) Display the stack"<<endl;
   do {
      cout<<"I want to "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>value;
            push(value);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }
   while(ch!=3);
   return 0;
}
