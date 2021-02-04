#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int i=0,n=5,j=0,item=20;
    printf("Original Array; \n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=%d \n",i,arr[i]);
    }
    while(j<n)
    {
        if(arr[j]==item)
        {
            break;
        }
        j=j+1;
    }
    printf("Found element %d at position %d\n", item, j+1);
    return 0;
}