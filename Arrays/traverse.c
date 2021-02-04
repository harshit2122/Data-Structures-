#include <stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int i=0,n=5;
    printf("The elements of array are: \n");
    for(i=0;i<n;i++)
    printf("arr[%d]= %d \n",i, arr[i]);
    return 0;
}