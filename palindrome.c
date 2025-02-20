#include<stdio.h>
int main()
{
    int num,reversed=0,
    origional Num,remainder;
    printf("Enter an integer:");
    scanf("%d",&num);
    origional Num=num;
    while(num!=0){
        remainder=num%10;
        reversed=reverse*10+remainder;
        num/=10
    }
    if (origional num==reversed)
    {
        printf("%d is a palindrome number\n",origional Num);
    }
    else{
        printf("%d is not a palindrome number\n",origional Num);
    }
    return 0;
}