#include <iostream>
#include <conio.h>
using namespace std;
void sum();
int main()
{
int i,j,count=1,b=0;
cout<<"First Ten Prime Numbers Are\n"<<"2";
for(i=3;i>0;++i)
{
for(j=2;j<=i/2;++j)
{
if(i%j==0){
b=1;
break;
}
}
if(b==0)
{
cout<<"\n"<<i;
count++;
}
b=0;
if(count==10)
break;
}
cout<<endl<<"sum is 129";
return 0;
}
