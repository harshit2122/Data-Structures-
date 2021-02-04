#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int i=0, n=5, j,k=3;
    j=k;
    printf("Original array: \n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=%d \n",i,arr[i]);
    }
    while(j<n)
    {
        arr[j-1]=arr[j];
        j=j+1;
    }
    n=n-1;
    
    printf("Array after deletion: \n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=%d \n",i,arr[i]);
    }
    return 0;
}