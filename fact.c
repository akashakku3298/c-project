#include<stdio.h>
factorial()
{
    int num = 5, fact = 1;
    
    // Can't calculate factorial of a negative number
    if(num < 0)
        printf("Error");
    else
    {
        for(int i = 1; i <= num; i++)
            fact = fact * i;
    }
    
    printf("Fact %d: %d",num, fact);
}
