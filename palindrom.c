#include<stdio.h>
int main(){
    int n,r,q,s,x;
    n=111;
    do

    {
        q=n/10;
        r=n%10;
        s=s*10+r;
        n=q;
    }
    while(n!=0);
    if(x==s)
    printf("no is polindrome");
    else{
        printf("no is not polindrome");
    }
    
    return 0;

    

}
