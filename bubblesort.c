#include<stdio.h>
int main()
{
    int arr[20],size,i,j,temp;
    printf("Enter the size of array =");
    scanf("%d",&size);
    printf("Enter the elments of array .....");
    for(i=0;i<size;i++)
    {
        printf("\n enter the %d element",i+1);
        scanf("%d",&arr[i]);
    }
    
    
    /*code for bubble sort*/
    for(i=0;i<size;i++)
    /*End of the code for bubble sort*/
    
    printf("\n sorted array is  ");
    for(i=0;i<size;i++)
    printf("/t%d",arr[i]);
    return 0;
}
