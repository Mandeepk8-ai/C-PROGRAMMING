#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements");
    scanf("%d", &n);
    int numbers[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Elements %d:",i+1);
        scanf("%d",&n(i));
        int greatest=numbers[0];
        for (int i=1;i<n;i++)
        {
            if (numbers[i]>greatest)
            {
                greatest=numbers[i];
            }
        }
        printf("the greatest number is:%d\n",greatest);
        return 0;
    }
}