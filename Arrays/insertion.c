#include <stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int item=60,k=3,n=5,j;
    int i=0; j=n;
    printf("The original elements of array are: \n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]= %d \n", i, arr[i]);
    }
    n=n+1;
    while(j>=k)
    {
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[k]=item;
    printf("Array after insertion is: \n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
    return 0;
}