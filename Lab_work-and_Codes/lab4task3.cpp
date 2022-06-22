#include<iostream>
#include<string>
#include<cstring>
using namespace std;
char *rev(char *str)
{
  int i,len=0,n;
  char temp;
  len=strlen(str);
  n=len-1;
  for(i = 0; i <=(len/2); i++)
  {
    temp=str[i];
    str[i]=str[n];
    str[n]=temp;
    n--;
  }
  return str;
}
int main()
{
    cout<<"enter name   ";
   char name[20];
 cin>>name;
    cout<<"Reverse name "<<endl;
    rev(name);
    cout<<name;
    return 0;
}
