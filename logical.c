#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=2,b=3,c=9,d=4;
    printf("And is %d\n",a>b&&c<d);
    printf("Or is %d\n",a>b||c<d);
    printf("Not is %d\n", !(a<b));
    return 0;
    }
