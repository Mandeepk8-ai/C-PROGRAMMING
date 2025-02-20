#include<stdio.h>
int main()
{
    int a;
    printf("1 for Red\n 2 for Blue\n 3 for pink\n");
    printf("enter your choice");
    scanf("%d",&a);
    switch(a)
    {
        case1:
        printf("Red");
        break;
        case2:
        printf("Black");
        break;
        case3:
        printf("Pink");
        break;
        default:
        printf("White");
    }
    return 0;
}