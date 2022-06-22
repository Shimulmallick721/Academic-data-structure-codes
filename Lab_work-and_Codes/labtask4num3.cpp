#include<iostream>
using namespace std;

class MyStack{
int *Stack, Top, MaxSize=5;
public:
Stack(int);
Stack();
bool isEmpty();
bool isFull();
bool push(int Element);
bool pop();
bool topElement();
void show();
void resize( int size);
};
MyStack::Stack( int Size =5 ){
	MaxSize = Size;
	Stack = new int[MaxSize];
	Top = 0;

MyStack::Stack(){
	delete [] Stack;
}
void resize( int Size = 5 ){
	int *tempStk = new int[ MaxSize + Size ];
	for( int i=0; i<MaxSize; i++ ) tempStk[i] = Stack[i];
	MaxSize += Size;
	delete [] Stack;
	Stack = tempStk;
}
void push( int Element ){
	if( isFull( ) )	resize( );
 	Stack[ Top++ ] = Element;
}

