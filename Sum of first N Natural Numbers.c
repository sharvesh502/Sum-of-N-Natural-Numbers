//Done by Sharvesh on 14.07.2025

#include <stdio.h>

void main()
{
    int i,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    
    {
        sum=sum+i;
    }
    printf("Sum=%d",sum);
}