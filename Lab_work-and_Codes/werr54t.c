
//90+80+70+60+.....+n


#include<stdio.h>
int main()
{
    int n,i,sum;
    //n=10;
    // i=90;
    scanf("%d",&n);

    sum=0;
    for(i=0; i<=n; i=i-10)


        sum=sum+i;


        printf("the value is %d",sum);


    return 0;
}
