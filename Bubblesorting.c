#include<stdio.h>

int main()
{
    int arr[]={7,9,4,8,10,};
    int i,j;
    int n=5;
    for(i=0,i<n,i++)
    {
        for(j=i+1,j<n,j++){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }
    }
    for (int i = 0; i < n; ++i)
    printf("Sorted array is:"%d",arr[]);

}
