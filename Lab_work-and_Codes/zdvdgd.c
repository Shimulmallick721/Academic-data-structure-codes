#include<stdio.h>
int main()
{
    int a,b,sum,mul,div,divv;
    //a=10;
    // b=20;
    printf("enter value of a,b");
    scanf("%d%d",&a,&b);
   // printf("enter value of b");
   // scanf("%d",&b);

    sum=a+b;
    mul=a*b;
    div=a/b;
    divv=a-b;
    printf("\n sum is%d",sum);
    printf("\n mul is%d",mul);
    printf("\n div is%d",div);
    printf("divv is%d",divv);

    return 0;

}
