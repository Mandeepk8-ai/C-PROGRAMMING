#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks");
    scanf("%d",&marks);
    if("marks>=90 && marks<=100")
    {
        printf("grade A\n");
    }
    else if(marks>=80 && marks<90)
    {
        printf("grade B\n");
    }
    else
    {
        printf("Grade C\n");
    }
    return 0;
}