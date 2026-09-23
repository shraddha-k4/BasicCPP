#include <stdio.h>
int main()
{
    int i,key;
    
    
    printf("Enter Array Element for Searching:");
    int arr[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",& arr[i]);
    }
    
    printf("Array Element for Linear Searching:");
    for(i=0;i<5;i++)
    {
        printf("%d \t",arr[i]);
    }
    
    printf("\nEnter key Element for Searching:");
    scanf("%d",&key);
    
    for(i=0;i<5;i++)
    {
        if(arr[i]==key)
        {
            printf("Element found at location:%d",i+1);
        }
    }
    
    return 0;
}