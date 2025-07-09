#include<stdio.h>
int sumofdigits(int num)
{
    if(num==0)
    return 0;
    else
    {
        return (num%10) + sumofdigits(num/10);
    }
}
int main()
{
    int num,result;
    printf("Enter a number:");
    scanf("%d",&num);
    result = sumofdigits(num);
    printf("The sum of digits is %d",result);
    return 0;
}