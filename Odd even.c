#include<stdio.h>
int main ()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number %2==0)
    {
        printf("the number %d is Even\n",number);
    }  
    else{
        printf("the number is %d is odd\n",number);
    } 
    return 0;
}