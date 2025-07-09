#include<stdio.h>
int linearsearch(int arr[],int key);
int main()
{
    int arr[5],key = 3,i;
    printf("Enter the elements of the array:");
    for( i =0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result = linearsearch(arr,key);

    if(result!=-1)
    {
        printf("The key is found at index %d",result);
    }
    else
    {
        printf("Didnt found the key");
    }
  return 0;
}
int linearsearch(int arr[],int key)
{
    for(int i =0;i<5;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}