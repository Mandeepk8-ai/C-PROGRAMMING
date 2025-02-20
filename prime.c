#include<stdio.h>
int main()
{
    int i,n,p=0;
    printf("enter a number");
    scanf("%d",&i);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            p=1;
            break;
        }
    }
    if(p==1)
    {
        printf("Number is prime");
    }
    else{
        printf("not a prime");
    }
    return 0;
}
