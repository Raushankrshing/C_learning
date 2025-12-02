#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the value of number");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    sum=sum+i;
    printf("%d first n natural no is: %d",n,sum);
    return 0;
}